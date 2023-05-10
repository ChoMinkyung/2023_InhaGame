#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/*
	p.413  도전 실전 예제
*/

int main()
{
	int arr[5][6]
	={
		{1,2,3,4,5},
		{6,7,8,9,10},
		{11,12,13,14,15},
		{16,17,18,19,20}
	};

	int row = sizeof(arr) / sizeof(arr[0]);
	int col = sizeof(arr[0]) / sizeof(int);

	for (int i = 0; i < row-1; i++)
	{
		int total = 0;
		for (int j = 0; j < col; j++)
		{
			if (j != col - 1)
			{
				total += arr[i][j];
			}
			else arr[i][j] = total;
		}
	}

	for (int i = 0; i < col; i++)
	{
		int total=0;
		for (int j = 0; j < row; j++)
		{
			if (j != row - 1) total += arr[j][i];
			else arr[j][i] = total;
		}
	}

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			printf("%2d ", arr[i][j]);
		}
		printf("\n");
	}


}