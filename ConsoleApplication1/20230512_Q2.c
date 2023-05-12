#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <Windows.h>

/*
	Q2. p.512 성적 처리 프로그램
	학번 이럼 학점(국영수)을 입력 받을 수 있는 구조체를 만들고
	임의 수의 학생에 대한 데이터를 입력받아 출력하는 프로그램을 작성하라.
	다음 4개의 메뉴를 구성하고, 각 메뉴 선택 시 작동은 다음과 같다.

	1. 입력 - 학번, 이름, 성적 순으로 입력
	2. 출력 - 성적(평균)에 따라 (정렬된 형태) 출력
	3. 검색 - 이름으로 해당 학생의 학점, 성적을 출력
	4. 종료
	단,
	1. 번호 중복 불가, 이름은 중복 가능
	2. 검색 -> 이름 검색으로 하고 먼저 찾은 것을 우선으로 출력
	3. 메모리 할당 사용, 자기 참조 구조체 활용

	입력/출력/검색은 각각 개별 함수로 구현

	** 더블 버퍼링 Create Console Screen Buffer
	-> 화면을 지웠다가 다시 그릴 때 깜빡임/깨짐 현상 방지

	** GetAsyncKeyState
	->

*/




struct student
{
	int no; // 학번
	char name[20]; // 이름
	int subject_score[3]; //국,영,수 점수
	int total; // 총점
	double avg; //평균
	char grade; // 학점
	struct student* next;
};

typedef struct student Student;

//입력하는 함수
void Finput(int total_student, Student* head, Student* current);
//출력하는 함수
void Foutput(int total_student, Student* head, Student* current);
//검색하는 함수
void Fsearch(int total_student, Student* head, Student* current);
//종료 함수
void Fexit();

int main()
{
	/*Student* student_list = (Student*)malloc(sizeof(Student));
	if (student_list == NULL)
	{
		printf("메모리가 부족합니다.\n");
		exit(1);
	}*/

	Student* head = NULL, * current = NULL;

	int total_student = 0;
	int sel;

	while (1)
	{

		//메뉴 선택
		printf("성적 처리 프로그램 입니다.메뉴를 선택하세요.\n");
		printf("01 입력 02 출력 03 검색 04 종료\n");

		scanf("%d", &sel);

		switch (sel)
		{
		case 0:
			printf("종료되었습니다.\n");
			exit(1);
			break;
		case 1:
			if (head == NULL) head = current = (Student*)malloc(sizeof(Student));
			else
			{
				current->next = (Student*)malloc(sizeof(Student));
				current = current->next;
			}
			Finput(total_student, head, current);
			if (current == NULL)
			{
				printf("메모리가 부족합니다.\n");
				exit(1);
			}
			total_student++;
			break;
		case 2:
			Foutput(total_student, head, current);
			break;
		case 3:
			Fsearch(total_student, head, current);
			break;
		case 4:
			Fexit();
			break;
		default:
			break;
		}
		printf("\n");

	}

}

void Finput(int total_student, Student* head, Student* current)
{
	int subject = sizeof((current)->subject_score) / sizeof(int);

	current->no = -1;
	while (current->no < 0)
	{
		printf("학번 : ");
		scanf("%d", &(current->no));
		for (int i = 0; i < total_student; i++)
		{
			//입력한 번호가 기존 번호와 같으면 다시 입력
			if ((head + i)->no == current->no)
			{
				current->no = -1;
				i--;
				printf("이미 있는 번호입니다. 다른 번호를 입력하세요.\n");
				break;
			}

		}
	}

	printf("이름 : ");
	scanf("%s", current->name);

	printf("국어, 영어, 수학 점수 : ");

	current->total = 0;
	for (int i = 0; i < subject; i++)
	{
		scanf("%d", &(current->subject_score[i]));
		current->total += current->subject_score[i];
	}

	current->avg = current->total / (double)subject;

	if (current->avg >= 90) current->grade = 'A';
	else if (current->avg >= 80) current->grade = 'B';
	else if (current->avg >= 70) current->grade = 'C';
	else current->grade = 'F';
}

void Foutput(int total_student, Student* head, Student* current)
{
	current = head;
	int subject = sizeof((current)->subject_score) / sizeof(int);

	while (total_student != 0)
	{
		printf("%d %s ", current->no, current->name);
		for (int i = 0; i < subject; i++)
		{
			printf("%3d ", current->subject_score[i]);
		}

		printf("%d %.1lf %c\n", current->total, current->avg, current->grade);

		total_student--;
		current = current->next;
	}
}

void Fsearch(int total_student, Student* head, Student* current)
{
	int find = 0;
	char name[20];
	printf("찾을 이름을 입력하세요 : ");
	scanf("%s", name);
	current = head;
	for (int i = 0; i < total_student; i++)
	{
		if (strcmp(current->name, name) == 0)
		{
			Foutput(1, current,current);
			current = current->next;
			find++;
		}
	}
	if (find == 0) printf("찾을 수 없습니다.\n");

}


void Fexit()
{
	printf("종료되었습니다.\n");
	exit(1);
}

