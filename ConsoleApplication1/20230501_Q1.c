#define _crt_secure_no_warnings

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
	Q1. 1이상 100미만인 정수 m과 n을 입력받아
	두 수의 배수를 출력하는 프로그램을 작성하라.
	단, m의 배수이면서 n의 배수인 정수는 한번만 출력해야 한다.

*/

int main()
{
	int m, n;
	printf("1이상 100미만인 정수 m과 n을 입력하세요 : ");
	scanf_s("%d%d", &m, &n);

	for (int i = 1; i < 100; i++)
	{
		if ((i % m == 0) || (i % n == 0)) printf("%d ", i);
	}

}