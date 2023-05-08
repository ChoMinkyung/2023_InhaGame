#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/*
	Q1. 길이가 5인 int형 배열을 선언하고, 사용자로부터 5개의 정수를 입력받아
	다음의 내용을 출력하는 프로그램을 작성하라.
*/


int max_array(int size, int array[5]);
int min_array(int size, int array[5]);
int sum_array(int size, int array[5]);

int main()
{
	int int_array[5];

	int size = sizeof(int_array)/sizeof(int_array[0]);
	int i = 0;
	printf("정수 5개를 입력하세요 : ");
	for (i = 0; i < size; i++)
	{
		scanf("%d", &int_array[i]);
	}


	printf("최대값:%d, 최소값:%d, 총합:%d\n", max_array(size, int_array), min_array(size, int_array), sum_array(size, int_array));

}

int max_array(int size, int array[5])
{
	int max = 0;
	for (int i = 0; i < size; i++)
	{
		if (max < array[i]) max = array[i];
	}

	return max;
}

int min_array(int size, int array[5])
{
	int min = array[0];
	for (int i = 0; i < size; i++)
	{
		if (min > array[i]) min = array[i];
	}

	return min;
}


int sum_array(int size, int array[5])
{
	int sum=0;
	for (int i = 0; i < size; i++)
	{
		sum += array[i];
	}
	return sum;
}