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
	printf("����   ������    &����     *����     **����\n");
	printf("-------------------------------------------\n");

	printf("  a%10d%10u\n", a, &a);
	printf(" pi%10u%10u%10d\n", pi, &pi, *pi);
	printf("ppi%10u%10u%10u%10u\n", ppi, &ppi, *ppi, **ppi);
	printf("-------------------------------------------\n");

	char* pa = "success";
	char* pb = "failure";

	printf("pa -> %s �ּ�:%u, pb -> %s �ּ�:%u\n", pa, &pa,  pb, &pb);
	printf("�ּ�:%u, �ּ�:%u\n", &(*pa), &(*pb));
	printf("%s\n", pa+1);
	swap_ptr(&pa, &pb);
	printf("pa -> %s �ּ�:%u, pb -> %s �ּ�:%u\n", pa, &pa, pb, &pb);
	printf("�ּ�:%u, �ּ�:%u\n", &(*pa), &(*pb));


	int a = 2;
	int* pa = &a;
	int** ppa = &pa;

	printf("a�� ��:%d, a�� �ּ�:%u\n", a, &a);
	printf("pa�� ��:%u, *pa�� ��:%u, pa�� �ּ�:%u\n", pa, *pa, &pa);
	printf("ppa�� ��:%u, *ppa�� ��:%u, **ppa�� ��:%d, ppa�� �ּ�:%u\n", ppa, *ppa, **ppa, &ppa);

	int sel;

	printf("01 �� ������ ��\n");
	printf("02 �� ������ ��\n");
	printf("03 �� ���� �߿��� ū �� ���\n");
	printf("���ϴ� ������ �����ϼ��� : ");
	scanf("%d", &sel);

	switch (sel)
	{
	case 1:func(fsum); break;
	case 2:func(fmul); break;
	case 3:func(fmax); break;
	}


	int arr[5];
	int* maxPtr = &arr[0]; // 0���� �ʱ�ȭ
	int* minPtr = &arr[0]; // 0���� �ʱ�ȭ


	int size = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < size; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
		if (arr[i] > *maxPtr) maxPtr = &arr[i]; //���� ū ���� ����ִ� �迭 ã��
		if (arr[i] < *minPtr) minPtr = &arr[i]; //���� ���� ���� ����ִ� �迭 ã��
	}



	printf("arr �ּҰ�: %u �ִ밪�� �ּҰ�: %u �ּ� ���� �ּҰ�: %u\n", arr, maxPtr, minPtr);
	// maxPtr�̶� minPtr�� �ּҰ��� �Ȱ��� ����

	printf("maxPtr�� �� : %d, minPtr�� ��: %d", *maxPtr, *minPtr);

	int* pi;
	int i, sum = 0;
	pi = (int*)malloc(5 * sizeof(int));
	if (pi == NULL)
	{
		printf("�޸𸮰� �����մϴ�!\n");
		exit(1);
	}

	printf("�ټ����� ���̸� �Է��ϼ��� : ");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &pi[i]);
		sum += pi[i];
	}

	printf("�ټ� ���� ��� ���� : %.1lf\n", (sum / 5.0));
	free(pi);

	int* pi;
	int size = 5;
	int count = 0;

	int num;
	int i;

	pi = (int*)calloc(size, sizeof(int));
	while (1)
	{
		printf("����� �Է��ϼ��� => ");
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

	printf("�� ������ ���� �Է��ϼ��� : ");
	scanf("%d%d", &a, &b);
	res = fp(a, b);
	printf("������� : %d\n", res);
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