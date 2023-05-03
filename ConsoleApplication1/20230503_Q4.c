#define _crt_secure_no_warnings

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/* 
	입력받은 값의 절대값 구하는 함수 abs()
	종료하려면 0 입력
*/

int abs(int n);

int main()
{
	int n;
	while (1)
	{
		printf("정수 n을 입력하세요(0 입력시 종료) : ");
		scanf_s("%d", &n);
		if (n != 0) printf("n=%d, |n|=%d\n", n, abs(n));
		else break;
	}
	
	printf("0이 입력되어 종료되었습니다.\n");
	return 0;
}

int abs(int n)
{
	if (n < 0)n = - n;
	return n;
}