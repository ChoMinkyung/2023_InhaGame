#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/*
	Q2. �迭�� ���ڰ� ������ ���� ������� ä�������� ���α׷��� �ۼ��϶�.
	�ð�������� M X M�� 2���� �迭�� ���ڰ� ä�������� �Ѵ�.

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
	printf("M�� �Է��ϼ��� : ");
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

	printf("�ð� �������� �ֱ�\n");

	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < M; j++)
		{
			printf("%3d ", A[i][j]);
		}

		printf("\n");
	}

}


