#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/*
	Q1. ���̰� 5�� int�� �迭�� �����ϰ�, ����ڷκ��� 5���� ������ �Է¹޾�
	������ ������ ����ϴ� ���α׷��� �ۼ��϶�.
*/


int max_array(int size, int array[5]);
int min_array(int size, int array[5]);
int sum_array(int size, int array[5]);

int main()
{
	int int_array[5];

	int size = sizeof(int_array)/sizeof(int_array[0]);
	int i = 0;
	printf("���� 5���� �Է��ϼ��� : ");
	for (i = 0; i < size; i++)
	{
		scanf("%d", &int_array[i]);
	}


	printf("�ִ밪:%d, �ּҰ�:%d, ����:%d\n", max_array(size, int_array), min_array(size, int_array), sum_array(size, int_array));

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