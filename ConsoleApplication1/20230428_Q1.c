#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	/*
	Q1. 사용자로부터 정수 3개를 입력받아 각 a,b,c에 저장을 하고
	조건연산자를 이용하여 이 변수들 중에 가장 큰 값을 구해
	출력하는 프로그램을 작성하라.
	*/

	int a, b, c, max = 0;
	printf("a를 입력하세요 : ");
	scanf("%d", &a);
	printf("b를 입력하세요 : ");
	scanf("%d", &b);
	printf("c를 입력하세요 : ");
	scanf("%d", &c);

	max = a > b ? a : b;
	max = max > c ? max : c;

	printf("a:%d, b:%d, c:%d\n가장 큰 값은 %d입니다.\n", a, b, c, max);

}
