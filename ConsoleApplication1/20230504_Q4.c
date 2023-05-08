#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/*
	int형 num1, num2를 선언과 동시에 10과 20으로 초기화
	int형 포인터 ptr1 ptr2를 선언하고
	각 num1과 num2를 이용해서 num1은 10 증가, num2는 10 rkath
	이후 ptr1 ptr2가 가리키는 대상을 서로 바꾼다.
	마지막으로 ptr1과 ptr2가 가리키는 변수의 내용을 출력
	num1, num2도 출력
*/

int main()
{
	int num1 = 10, num2 = 20;
	int* ptr1, * ptr2;
	printf("초기 num1=%d num2=%d\n", num1, num2);

	ptr1 = &num1;
	ptr2 = &num2;

	*ptr1 += 10;
	*ptr2 -= 10;

	
	ptr1 = &num2;
	ptr2 = &num1;

	printf("num1=%d num2=%d\n", num1, num2);
	printf("ptr1->%d, ptr2->%d\n", *ptr1, *ptr2);
}