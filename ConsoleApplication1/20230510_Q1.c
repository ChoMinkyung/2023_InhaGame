#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/*
	Q1. 다음과 같은 A행렬을 B행렬과 같은 형태가 되도록
	프로그램을 작성하라.

	A행렬 
	----------------------------------------------
	  0 1 2 3                   0 1
 	0 1 2 3 4                0  5 1
	1 5 6 7 8                1  6 2
	                         2  7 3
							 3  8 4

	  0 1 2					0 1 2
	0 1 2 3				0   7 4 1
	1 4 5 6				1   8 5 2
	2 7 8 9				2   9 6 3

*/

int main()
{
	int A[2][4];
	int B[4][2];

	//int A[3][3];
	//int B[3][3];

	int row = sizeof(A) / sizeof(A[0]);
	int col = sizeof(A[0]) / sizeof(int);

	printf("[%d][%d] 행렬을 입력하세요.\n", row, col);

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			scanf("%d", &A[i][j]);
		}
		//printf("\n");
	}

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			B[j][i] = A[row-i-1][j];
		}
	}


	printf("바뀐 행렬 출력\n");
	for (int i = 0; i < col; i++)
	{
		for (int j = 0; j < row; j++)
		{
			printf("%d ", B[i][j]);
		}
		printf("\n");
	}
}
