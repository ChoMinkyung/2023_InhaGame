#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	/*
		Q1. ������ ����ϱ�
		�ΰ� ������ 100���̶�� �����ϰ�
		��� �� ���� �ǿ�� ������ 3�ð� 40�� ����ȴٰ� �Ѵ�.

		� ����� ����(20��� ����)�� �� ����
		N�Ⱓ �Ϸ翡 M���Ǿ� ��踦 �ǿ��ٸ�
		������ �󸶳� ����Ǿ��� �� ����� �� �� �ִ°�?

		���
		N=20, M=3
		�پ�� ���� : 00�� 00�� 00��
		��� ���� : 00�� 00�� 00�� 00��
	*/
	int age = 20;
	int N, M; //N : ��� �ǿ� ���, M : �ǿ� ��� ���� ��
	printf("����ǿ� ����� �ǿ� ��� ���Ǽ��� �Է��ϼ���.\n");
	scanf("%d%d", &N, &M);

	//1�� = 365*24*60�� 1�� = 24*60�� 1�ð� = 60��
	int one_year = 365 * 24 * 60, one_day = 24 * 60, one_hour = 60;

	int year = 0, day = 0, hour = 0, minute = 0;

	int dLifespan, eLifespan; // �پ�� ����, ��� ����

	eLifespan = 100 * 365 * 24 * 60;


	//3�ð� 40�� = 60*3 + 40 = 220��
	dLifespan = 220 * N * M * 365;

	year = dLifespan / one_year;
	day = (dLifespan - year * one_year) / one_day;
	hour = (dLifespan - year * one_year - day * one_day) / one_hour;
	minute = dLifespan - year * one_year - day * one_day - hour * one_hour;

	printf("�پ�� ���� : %d�� %d�� %d�ð� %d��\n", year, day, hour, minute);

	eLifespan = eLifespan - dLifespan;

	year = eLifespan / one_year;
	day = (eLifespan - year * one_year) / one_day;
	hour = (eLifespan - year * one_year - day * one_day) / one_hour;
	minute = eLifespan - year * one_year - day * one_day - hour * one_hour;

	printf("��� ���� : %d�� %d�� %d�ð� %d��\n", year, day, hour, minute);
}