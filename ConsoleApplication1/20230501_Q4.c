#define _crt_secure_no_warnings

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/*
	Q4. ������ �� n�� �Է¹޾� ������ ���� ��찡 �ǵ��� ���α׷��� �ۼ��϶�.
	
	n=5
	*       *
	* *   * *
	* * * * *
	* *   * *
	*       *
	

	n=4
	*     *
	* * * *
	* * * *
	*     *


*/

int main()
{
	int n;
	printf("���� n�� �Է��ϼ��� : ");
	scanf_s("%d", &n);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (j >= i && i + j > n-2) printf("* ");
			else if (i >=j && i + j < n) printf("* ");
			else printf("  ");

		}
		printf("\n");
	}
}