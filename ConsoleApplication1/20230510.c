#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main()
{
	/*
	int score[3][4];
	int total;
	double avg;
	int i, j;

	for (i = 0; i < 3; i++)
	{
		printf("4과목의 점수 입력 : ");
		for (j = 0; j < 4; j++)
		{
			scanf("%d", &score[i][j]);
		}
	}

	for (i = 0; i < 3; i++)
	{
		total = 0;
		for (j = 0; j < 4; j++)
		{
			total += score[i][j];
		}
		avg = total / 4.0;
		printf("총점 %d, 평균 : %.2lf\n", total, avg);
	}

	char animal[5][20];
	int i;
	int count;

	count = sizeof(animal) / sizeof(animal[0]);
	for (i = 0; i < count; i++)
	{
		scanf("%s", animal[i]);
	}

	for (i = 0; i < count; i++)
	{
		printf("%s ", animal[i]);
	}

	int score[2][3][4] = {
		{
			{72, 80, 95, 60},
		{68, 98, 83, 90},
		{ 75, 72, 84, 90}
}
, {
	{66, 85, 90, 88},
		{95, 92, 88, 95},
		{43, 72, 56, 75}
}
	};

	int i, j, k;

	for (i = 0; i < 2; i++)
	{
		printf("%d반 점수...\n", i + 1);
		{
			for (j = 0; j < 3; j++)
			{
				printf("%d번의 점수 : ", j+1);
				for (k = 0; k < 4; k++)
				{
					printf("%5d", score[i][j][k]);
				}
				printf("\n");
			}
			printf("\n");
		}
	}

	char* pary[5];
	int i;

	pary[0] = "dog";
	pary[1] = "elephant";
	pary[2] = "horse";
	pary[3] = "tiger";
	pary[4] = "lion";

	for (i = 0; i < 5; i++)
	{
		printf("%s\n", pary[i]);
	}
	*/

	int ary1[4] = { 1,2,3,4 };
	int ary2[4] = { 11,12,13,14 };
	int ary3[4] = { 21,22,23,24 };
	int* pary[3] = { ary1, ary2, ary3 };
	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%5d의 주소 :%u", pary[i][j], &pary[i][j]);
		}
		printf("\n\n");
		printf("ary%d의 주소 : %u\n\n", i, pary[i]);
	}

	return 0;
}