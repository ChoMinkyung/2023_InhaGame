#define _crt_secure_no_warnings

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/*
	Q4. 임의의 수 n을 입력받아 다음과 같은 경우가 되도록 프로그램을 작성하라.
	
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
	printf("정수 n을 입력하세요 : ");
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