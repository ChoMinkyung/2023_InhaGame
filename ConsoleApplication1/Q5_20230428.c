#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
	Q5. �� ���� �Է¹޾� �� �� ���̿� �����ϴ� ������ ����
	���ϴ� ���α׷� �ۼ�
*/

int main()
{
	int n1, n2, S=0;

	printf("n1, n2�� �Է��ϼ��� : ");
	scanf("%d%d", &n1, &n2);

	
	if (n1 > n2)
	{
		int temp = n2;
		n2 = n1;
		n1 = temp;
	}

	for (int i = n1; i < n2 + 1; i++)
	{
		S += i;
	}

	printf("%d�� %d ���̿� �����ϴ� ��� ������ ���� %d�Դϴ�.", n1, n2, S);
}