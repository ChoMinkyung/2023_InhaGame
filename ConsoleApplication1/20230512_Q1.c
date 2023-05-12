#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/*
	Q1. p474 소수 계산 프로그램 - 반복
*/

int main()
{

	printf("0을 입력하면 종료됩니다.\n\n");
	while (1)
	{
		int M;
		printf("숫자 M을 입력하세요  : ");
		scanf("%d", &M);

		if (M == 0)break;
		else if (M == 1) continue;

		int* primeNumber = (int*)malloc(sizeof(int) * M - 2);

		if (primeNumber == NULL)
		{
			printf("메모리가 부족합니다.\n");
			exit(1);
		}

		for (int i = 2; i < M; i++)
		{
			int pn = 1;
			for (int j = 2; j < i; j++)
			{
				if (i % j == 0)
				{
					primeNumber[i - 2] = 0;
					pn = 0;
					break;
				}
			}
			if (pn == 1)
			{
				primeNumber[i - 2] = i;
			}
		}

		printf("\n2부터 %d까지 소수 출력\n", M);
		for (int i = 0; i < M - 2; i++)
		{
			if (primeNumber[i] == 0) printf("  X");
			else printf("%3d", primeNumber[i]);

			if ((i + 1) % 5 == 0)printf("\n");
		}
		printf("\n\n");

		free(primeNumber);
	}
	
	printf("\n0이 입력되어 종료되었습니다.\n");

}