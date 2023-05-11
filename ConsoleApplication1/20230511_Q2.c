#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/*
	다음과 같이 두개의 int형 포인터 변수와 길이가 5인 int형 배열을 선언한다.
	
	int* maxPtr;
	int * minPtr;
	int arr[5];

	MaxAadMin 이란 함수를 정의하고 이를 호출하여
	위 배열과 두 포인터를 변수로 전달한다. 리턴값은 없다.
	이 함수의 호출이 완료되면, 포인터 변수 maxPtr에는 가장 큰 값이, 
	minPtr 에는 가장 작은 배열 요소의 주소값이 저장되어야 한다.

	결과 > arr 주소값, 최대, 최조의 주소값

		maxPtr, minPtr이 가진 주소에 저장된 값을 출력하라.
	
*/

void MaxAndMin(int* arr, int arr_size, int* maxPtr, int *minPtr);

int main()
{
	int arr[5];
	int* maxPtr = arr;
	int* minPtr = arr;
	int arr_size = sizeof(arr) / sizeof(int);

	printf("%d개 정수를 입력하세요 : ", arr_size);
	for (int i = 0;i < arr_size; i++) 
	{
		scanf("%d", &arr[i]);
	}

	MaxAndMin(arr,arr_size, &maxPtr, &minPtr);

	printf("arr의 주소값:%u, maxPtr의 주소값:%u, minPtr의 주소값:%u\n", &arr, &maxPtr, &minPtr);
	printf("maxPtr:%d, minPtr:%d\n" , *maxPtr, *minPtr);
}

void MaxAndMin(int* arr, int arr_size, int**maxPtr, int**minPtr)
{
	for (int i = 0; i < arr_size; i++)
	{	
		if ( **maxPtr< arr[i]) *maxPtr = &arr[i];
		if ( **minPtr > arr[i]) *minPtr = &arr[i];
	}
}