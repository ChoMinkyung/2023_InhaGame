#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
	�� ���� ������ �Է¹޾� �� ���� ���� ����ϴ� ���α׷��� �ۼ��϶�.
	�� , ������ ū ������ ���� ���� �����Ѵ�.
*/
int main()
{
	int n1, n2, d;
	printf("�� ������ �Է��ϼ���.");
	scanf("%d%d", &n1, &n2);

	if (n1 > n2)
	{
		d = n1 - n2;
	}
	else
	{
		d = n2 - n1;
	}

	printf("if~else���� �̿��� �� ���� �� : %d\n", d);

	d = n1 > n2 ? n1 - n2 : n2 - n1;

	printf("���� �����ڸ� �̿��� �� ���� �� : %d\n", d);

}
