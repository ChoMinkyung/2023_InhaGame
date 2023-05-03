#define _crt_secure_no_warnings

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/*
	다음 식을 만족하는 모든  A와 Z를 구하는 프로그램을 작성하라.

	  A Z
	+ Z A
	------
	  N N

	N은 입력받아.
*/

int main()
{
	int n;
	printf("자연수 n을 입력하세요 : ");
	scanf_s("%d", &n);
	printf("n=%d일때\n", n);
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (i+j==n)//((i * 10 + j) + (j * 10 + i) == n * 10 + n)
			{
				printf("A=%d, Z=%d\n", i, j);
			}
		}
	}
}