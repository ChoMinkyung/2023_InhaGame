#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
	Q3. �л��� ��ü ��� ������ ���� ������ ����ϴ� ���α׷��� �ۼ�.
	������ 90�� �̻� A, ������ 80�� �̻� B
	������ 70�� �̻� C, ������ 60�� �̻� D
	�� �̸��� F�� ó���Ѵ�.

	���α׷� ����� ����, ����, ������ ������ �Է¹޴´�.
	�� ����� ���ϰ�, �� �� ������ �����Ͽ� ������ ������ ����϶�.
*/

int main()
{
	int kor, eng, mat; // ����, ����, ���� ����
	float avg=0;
	char grade;
	printf("���� ������ �Է��ϼ��� : ");
	scanf("%d", &kor);
	printf("���� ������ �Է��ϼ��� : ");
	scanf("%d", &eng);
	printf("���� ������ �Է��ϼ��� : ");
	scanf("%d", &mat);

	avg = (kor + eng + mat) / 3.0;
	if (avg >= 90)
	{
		grade = 'A';
		//printf("����, ����, ������ ����� %.1f�� ������ %c�Դϴ�.", avg, grade);
	}
	else if (avg >= 80)
	{
		grade = 'B';
		//printf("����, ����, ������ ����� %.1f�� ������ %c�Դϴ�.", avg, grade);
	}
	else if (avg >= 70)
	{
		grade = 'C';
		//printf("����, ����, ������ ����� %.1f�� ������ %c�Դϴ�.", avg, grade);
	}
	else if (avg >= 60)
	{
		grade = 'D';
		//printf("����, ����, ������ ����� %.1f�� ������ %c�Դϴ�.", avg, grade);
	}
	else
	{
		grade = 'F';
		//printf("����, ����, ������ ����� %.1f�� ������ %c�Դϴ�.", avg, grade);
	}
	printf("����, ����, ������ ����� %.1f�� ������ %c�Դϴ�.", avg, grade);

}