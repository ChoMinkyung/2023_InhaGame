#define _crt_secure_no_warnings

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/*
	���� ���� �����ϴ� ���  A�� Z�� ���ϴ� ���α׷��� �ۼ��϶�.

	  A Z
	+ Z A
	------
	  N N

	N�� �Է¹޾�.
*/

int main()
{
	int n;
	printf("�ڿ��� n�� �Է��ϼ��� : ");
	scanf_s("%d", &n);
	printf("n=%d�϶�\n", n);
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