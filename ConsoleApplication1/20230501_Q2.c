#define _crt_secure_no_warnings

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*

	Q2. ������ n�� �Է¹޾Ƽ� ������ ���� ���·� ����ϵ��� �϶�.


	*
	* *
	* * *
	* * * *
	* * * * *


*/

int main()
{
	int n;
	printf("���� n�� �Է��ϼ��� : ");
	scanf_s("%d", &n);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	printf("\n");

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (n - i - j - 1 > 0) printf("  ");
			else printf("* ");
		}
		printf("\n");
	}
}