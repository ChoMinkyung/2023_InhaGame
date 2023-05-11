#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/*
	������ ���� �ΰ��� int�� ������ ������ ���̰� 5�� int�� �迭�� �����Ѵ�.
	
	int* maxPtr;
	int * minPtr;
	int arr[5];

	MaxAadMin �̶� �Լ��� �����ϰ� �̸� ȣ���Ͽ�
	�� �迭�� �� �����͸� ������ �����Ѵ�. ���ϰ��� ����.
	�� �Լ��� ȣ���� �Ϸ�Ǹ�, ������ ���� maxPtr���� ���� ū ����, 
	minPtr ���� ���� ���� �迭 ����� �ּҰ��� ����Ǿ�� �Ѵ�.

	��� > arr �ּҰ�, �ִ�, ������ �ּҰ�

		maxPtr, minPtr�� ���� �ּҿ� ����� ���� ����϶�.
	
*/

void MaxAndMin(int* arr, int arr_size, int* maxPtr, int *minPtr);

int main()
{
	int arr[5];
	int* maxPtr = arr;
	int* minPtr = arr;
	int arr_size = sizeof(arr) / sizeof(int);

	printf("%d�� ������ �Է��ϼ��� : ", arr_size);
	for (int i = 0;i < arr_size; i++) 
	{
		scanf("%d", &arr[i]);
	}

	MaxAndMin(arr,arr_size, &maxPtr, &minPtr);

	printf("arr�� �ּҰ�:%u, maxPtr�� �ּҰ�:%u, minPtr�� �ּҰ�:%u\n", &arr, &maxPtr, &minPtr);
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