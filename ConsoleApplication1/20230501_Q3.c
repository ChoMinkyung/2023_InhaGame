#define _crt_secure_no_warnings

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main()
{
	int n;
	printf("���� n�� �Է��ϼ��� : ");
	scanf_s("%d", &n);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i + j +1 == n || i == j)printf("* ");
			else printf("  ");
		}
		printf("\n");
	}
}