#define _crt_secure_no_warnings

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
	Q1. 1�̻� 100�̸��� ���� m�� n�� �Է¹޾�
	�� ���� ����� ����ϴ� ���α׷��� �ۼ��϶�.
	��, m�� ����̸鼭 n�� ����� ������ �ѹ��� ����ؾ� �Ѵ�.

*/

int main()
{
	int m, n;
	printf("1�̻� 100�̸��� ���� m�� n�� �Է��ϼ��� : ");
	scanf_s("%d%d", &m, &n);

	for (int i = 1; i < 100; i++)
	{
		if ((i % m == 0) || (i % n == 0)) printf("%d ", i);
	}

}