#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/*
	int�� num1, num2�� ����� ���ÿ� 10�� 20���� �ʱ�ȭ
	int�� ������ ptr1 ptr2�� �����ϰ�
	�� num1�� num2�� �̿��ؼ� num1�� 10 ����, num2�� 10 rkath
	���� ptr1 ptr2�� ����Ű�� ����� ���� �ٲ۴�.
	���������� ptr1�� ptr2�� ����Ű�� ������ ������ ���
	num1, num2�� ���
*/

int main()
{
	int num1 = 10, num2 = 20;
	int* ptr1, * ptr2;
	printf("�ʱ� num1=%d num2=%d\n", num1, num2);

	ptr1 = &num1;
	ptr2 = &num2;

	*ptr1 += 10;
	*ptr2 -= 10;

	
	ptr1 = &num2;
	ptr2 = &num1;

	printf("num1=%d num2=%d\n", num1, num2);
	printf("ptr1->%d, ptr2->%d\n", *ptr1, *ptr2);
}