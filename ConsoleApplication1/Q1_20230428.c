#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	/*
	Q1. ����ڷκ��� ���� 3���� �Է¹޾� �� a,b,c�� ������ �ϰ�
	���ǿ����ڸ� �̿��Ͽ� �� ������ �߿� ���� ū ���� ����
	����ϴ� ���α׷��� �ۼ��϶�.
	*/

	int a, b, c, max = 0;
	printf("a�� �Է��ϼ��� : ");
	scanf("%d", &a);
	printf("b�� �Է��ϼ��� : ");
	scanf("%d", &b);
	printf("c�� �Է��ϼ��� : ");
	scanf("%d", &c);

	max = a > b ? a : b;
	max = max > c ? max : c;

	printf("a:%d, b:%d, c:%d\n���� ū ���� %d�Դϴ�.\n", a, b, c, max);

}
