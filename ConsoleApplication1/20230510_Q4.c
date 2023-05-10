#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/*
	다음과 같이 배열에 숫자가 채워지도록 프로그램을 작성하라.
	(N X N 의경우로만 작성)
	N = 3

	  0 1 2
	0 1 2 6
	1 3 5 7
	2 4 8 9


	(0 0)  (0 1) (1 0)  (2 0) (1 1) (0 2)  (1 2) (2 1)  (2 2)
*/


int main()
{
	int N;
	printf("N을 입력하세요 : ");
	scanf("%d", &N);
	int arr[10][10];
	int count = 0;
	int n = 1;
	//("[%d][%d]을 입력하세요\n", N, N);

	while (count <= 2 * (N - 1))
	{
		if (count % 2 != 0)
		{
			for (int i = 0; i <= count; i++)
			{
				for (int j = count - i; i + j == count; j--)
				{
					if (j > N - 1 || i > N - 1) break;
					else arr[i][j] = n;
					n++;
				}
			}
		}
		else
		{
			for (int i = count; i >= 0; i--)
			{
				for (int j = count - i; i + j == count; j++)
				{
					if (j > N - 1 || i > N - 1) break;
					else arr[i][j] = n;
					n++;
				}
			}
		}
		count++;

	}

	printf("대각선으로 넣기\n");
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			printf("%2d ", arr[i][j]);
		}
		printf("\n");
	}
}