#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/*
	Q2. 배열에 숫자가 다음과 같은 방법으로 채워지도록 프로그램을 작성하라.
	시계방향으로 M X M의 2차원 배열에 숫자가 채워지도록 한다.

	M = 3

	1 2 3
	8 9 4
	7 6 5

*/


int main()
{
	int A[10][10] = { 0 };
	int mode = 0, n = 1;
	int M;
	printf("M을 입력하세요 : ");
	scanf("%d", &M);

	int i = 0, j = 0;
	

	while (n < M * M)
	{
		A[i][j] = n;


		if (mode == 0)
		{
			if (j + 1 == M || A[i][j + 1] != 0)
			{
				mode++;
				continue;
			}
			else j++;
		}		
		else if (mode == 1)
		{
			if (i + 1 == M || A[i + 1][j] != 0)
			{
				mode++;
				continue;
			}
			else i++;
		}
		else if (mode == 2)
		{
			if (j - 1 < 0 || A[i][j - 1] != 0)
			{
				mode++;
				continue;
			}
			else j--;
		}
		else if (mode == 3)
		{
			if (A[i - 1][j] != 0) {
				mode = 0;
				continue;
			}
			else i--;
		}

		n++;
	}

	A[i][j] = n;

	printf("시계 방향으로 넣기\n");

	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < M; j++)
		{
			printf("%3d ", A[i][j]);
		}

		printf("\n");
	}

}


