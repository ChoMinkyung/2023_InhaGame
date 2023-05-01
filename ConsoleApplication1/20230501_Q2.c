#define _crt_secure_no_warnings

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*

	Q2. 임의의 n을 입력받아서 다음과 같은 형태로 출력하도록 하라.


	*
	* *
	* * *
	* * * *
	* * * * *


*/

int main()
{
	int n;
	printf("정수 n을 입력하세요 : ");
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