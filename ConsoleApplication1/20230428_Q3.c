#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
	Q3. 학생이 전체 평균 점수에 대한 학점을 출력하는 프로그램을 작성.
	성적이 90점 이상 A, 성적이 80점 이상 B
	성적이 70점 이상 C, 성적이 60점 이상 D
	그 미만은 F로 처리한다.

	프로그램 실행시 국어, 영어, 수학의 점수를 입력받는다.
	그 평균을 구하고, 위 평가 기준을 참고하여 적절한 학점을 출력하라.
*/

int main()
{
	int kor, eng, mat; // 국어, 영어, 수학 점수
	float avg=0;
	char grade;
	printf("국어 점수를 입력하세요 : ");
	scanf("%d", &kor);
	printf("영어 점수를 입력하세요 : ");
	scanf("%d", &eng);
	printf("수학 점수를 입력하세요 : ");
	scanf("%d", &mat);

	avg = (kor + eng + mat) / 3.0;
	if (avg >= 90)
	{
		grade = 'A';
		//printf("국어, 영어, 수학의 평균은 %.1f점 학점은 %c입니다.", avg, grade);
	}
	else if (avg >= 80)
	{
		grade = 'B';
		//printf("국어, 영어, 수학의 평균은 %.1f점 학점은 %c입니다.", avg, grade);
	}
	else if (avg >= 70)
	{
		grade = 'C';
		//printf("국어, 영어, 수학의 평균은 %.1f점 학점은 %c입니다.", avg, grade);
	}
	else if (avg >= 60)
	{
		grade = 'D';
		//printf("국어, 영어, 수학의 평균은 %.1f점 학점은 %c입니다.", avg, grade);
	}
	else
	{
		grade = 'F';
		//printf("국어, 영어, 수학의 평균은 %.1f점 학점은 %c입니다.", avg, grade);
	}
	printf("국어, 영어, 수학의 평균은 %.1f점 학점은 %c입니다.", avg, grade);

}