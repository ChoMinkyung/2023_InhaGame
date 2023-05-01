#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
	두 개의 정수를 입력받아 두 수의 차를 출력하는 프로그램을 작성하라.
	단 , 무조건 큰 수에서 작은 수를 빼야한다.
*/
int main()
{
	int n1, n2, d;
	printf("두 정수를 입력하세요.");
	scanf("%d%d", &n1, &n2);

	if (n1 > n2)
	{
		d = n1 - n2;
	}
	else
	{
		d = n2 - n1;
	}

	printf("if~else문을 이용한 두 수의 차 : %d\n", d);

	d = n1 > n2 ? n1 - n2 : n2 - n1;

	printf("조건 연산자를 이용한 두 수의 차 : %d\n", d);

}
