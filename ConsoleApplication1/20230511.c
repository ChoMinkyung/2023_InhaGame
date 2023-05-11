#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

void swap_ptr(char** ppa, char** ppb);

void func(int(*fp)(int, int));
int fsum(int a, int b);
int fmul(int a, int b);
int fmax(int a, int b);

int main()
{
	/*
	int a = 10;
	int* pi;
	int** ppi;

	pi = &a;
	ppi = &pi;

	printf("-------------------------------------------\n");
	printf("변수   변숫값    &연산     *연산     **연산\n");
	printf("-------------------------------------------\n");

	printf("  a%10d%10u\n", a, &a);
	printf(" pi%10u%10u%10d\n", pi, &pi, *pi);
	printf("ppi%10u%10u%10u%10u\n", ppi, &ppi, *ppi, **ppi);
	printf("-------------------------------------------\n");

	char* pa = "success";
	char* pb = "failure";

	printf("pa -> %s 주소:%u, pb -> %s 주소:%u\n", pa, &pa,  pb, &pb);
	printf("주소:%u, 주소:%u\n", &(*pa), &(*pb));
	printf("%s\n", pa+1);
	swap_ptr(&pa, &pb);
	printf("pa -> %s 주소:%u, pb -> %s 주소:%u\n", pa, &pa, pb, &pb);
	printf("주소:%u, 주소:%u\n", &(*pa), &(*pb));


	int a = 2;
	int* pa = &a;
	int** ppa = &pa;

	printf("a의 값:%d, a의 주소:%u\n", a, &a);
	printf("pa의 값:%u, *pa의 값:%u, pa의 주소:%u\n", pa, *pa, &pa);
	printf("ppa의 값:%u, *ppa의 값:%u, **ppa의 값:%d, ppa의 주소:%u\n", ppa, *ppa, **ppa, &ppa);

	int sel;

	printf("01 두 정수의 합\n");
	printf("02 두 정수의 곱\n");
	printf("03 두 정수 중에서 큰 값 계산\n");
	printf("원하는 연산을 선택하세요 : ");
	scanf("%d", &sel);

	switch (sel)
	{
	case 1:func(fsum); break;
	case 2:func(fmul); break;
	case 3:func(fmax); break;
	}


	int arr[5];
	int* maxPtr = &arr[0]; // 0으로 초기화
	int* minPtr = &arr[0]; // 0으로 초기화


	int size = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < size; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
		if (arr[i] > *maxPtr) maxPtr = &arr[i]; //가장 큰 값이 들어있는 배열 찾기
		if (arr[i] < *minPtr) minPtr = &arr[i]; //가장 작은 값이 들어있는 배열 찾기
	}



	printf("arr 주소값: %u 최대값의 주소값: %u 최소 값의 주소값: %u\n", arr, maxPtr, minPtr);
	// maxPtr이랑 minPtr의 주소값이 똑같이 나옴

	printf("maxPtr의 값 : %d, minPtr의 값: %d", *maxPtr, *minPtr);

	int* pi;
	int i, sum = 0;
	pi = (int*)malloc(5 * sizeof(int));
	if (pi == NULL)
	{
		printf("메모리가 부족합니다!\n");
		exit(1);
	}

	printf("다섯명의 나이를 입력하세요 : ");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &pi[i]);
		sum += pi[i];
	}

	printf("다섯 명의 평균 나이 : %.1lf\n", (sum / 5.0));
	free(pi);

	int* pi;
	int size = 5;
	int count = 0;

	int num;
	int i;

	pi = (int*)calloc(size, sizeof(int));
	while (1)
	{
		printf("양수만 입력하세요 => ");
		scanf("%d", &num);
		if (num <= 0)break;
		if (count == size)
		{
			size += 5;
			pi = (int*)realloc(pi, size * sizeof(int));
		}
		pi[count++] = num;


	}
	for (i = 0; i < count; i++)
	{
		printf("%5d", pi[i]);
	}
	free(pi);
*/

	


}


void func(int (*fp)(int, int))
{
	int a, b;
	int res;

	printf("두 정수의 값을 입력하세요 : ");
	scanf("%d%d", &a, &b);
	res = fp(a, b);
	printf("결과값은 : %d\n", res);
}

int fsum(int a, int b)
{
	return (a + b);
}

int fmul(int a, int b)
{
	return (a * b);
}

int fmax(int a, int b)
{
	if (a > b) return a;
	else return b;
}


void swap_ptr(char** ppa, char** ppb)
{
	char* pt;
	pt = *ppa;
	*ppa = *ppb;
	*ppb = pt;
}