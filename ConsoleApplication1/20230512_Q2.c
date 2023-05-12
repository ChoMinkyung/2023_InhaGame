#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <Windows.h>

/*
	Q2. p.512 ���� ó�� ���α׷�
	�й� �̷� ����(������)�� �Է� ���� �� �ִ� ����ü�� �����
	���� ���� �л��� ���� �����͸� �Է¹޾� ����ϴ� ���α׷��� �ۼ��϶�.
	���� 4���� �޴��� �����ϰ�, �� �޴� ���� �� �۵��� ������ ����.

	1. �Է� - �й�, �̸�, ���� ������ �Է�
	2. ��� - ����(���)�� ���� (���ĵ� ����) ���
	3. �˻� - �̸����� �ش� �л��� ����, ������ ���
	4. ����
	��,
	1. ��ȣ �ߺ� �Ұ�, �̸��� �ߺ� ����
	2. �˻� -> �̸� �˻����� �ϰ� ���� ã�� ���� �켱���� ���
	3. �޸� �Ҵ� ���, �ڱ� ���� ����ü Ȱ��

	�Է�/���/�˻��� ���� ���� �Լ��� ����

	** ���� ���۸� Create Console Screen Buffer
	-> ȭ���� �����ٰ� �ٽ� �׸� �� ������/���� ���� ����

	** GetAsyncKeyState
	->

*/




struct student
{
	int no; // �й�
	char name[20]; // �̸�
	int subject_score[3]; //��,��,�� ����
	int total; // ����
	double avg; //���
	char grade; // ����
	struct student* next;
};

typedef struct student Student;

//�Է��ϴ� �Լ�
void Finput(int total_student, Student* head, Student* current);
//����ϴ� �Լ�
void Foutput(int total_student, Student* head, Student* current);
//�˻��ϴ� �Լ�
void Fsearch(int total_student, Student* head, Student* current);
//���� �Լ�
void Fexit();

int main()
{
	/*Student* student_list = (Student*)malloc(sizeof(Student));
	if (student_list == NULL)
	{
		printf("�޸𸮰� �����մϴ�.\n");
		exit(1);
	}*/

	Student* head = NULL, * current = NULL;

	int total_student = 0;
	int sel;

	while (1)
	{

		//�޴� ����
		printf("���� ó�� ���α׷� �Դϴ�.�޴��� �����ϼ���.\n");
		printf("01 �Է� 02 ��� 03 �˻� 04 ����\n");

		scanf("%d", &sel);

		switch (sel)
		{
		case 0:
			printf("����Ǿ����ϴ�.\n");
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
				printf("�޸𸮰� �����մϴ�.\n");
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
		printf("�й� : ");
		scanf("%d", &(current->no));
		for (int i = 0; i < total_student; i++)
		{
			//�Է��� ��ȣ�� ���� ��ȣ�� ������ �ٽ� �Է�
			if ((head + i)->no == current->no)
			{
				current->no = -1;
				i--;
				printf("�̹� �ִ� ��ȣ�Դϴ�. �ٸ� ��ȣ�� �Է��ϼ���.\n");
				break;
			}

		}
	}

	printf("�̸� : ");
	scanf("%s", current->name);

	printf("����, ����, ���� ���� : ");

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
	printf("ã�� �̸��� �Է��ϼ��� : ");
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
	if (find == 0) printf("ã�� �� �����ϴ�.\n");

}


void Fexit()
{
	printf("����Ǿ����ϴ�.\n");
	exit(1);
}

