#define _crt_secure_no_warnings

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/* 
	�Է¹��� ���� ���밪 ���ϴ� �Լ� abs()
	�����Ϸ��� 0 �Է�
*/

int abs(int n);

int main()
{
	int n;
	while (1)
	{
		printf("���� n�� �Է��ϼ���(0 �Է½� ����) : ");
		scanf_s("%d", &n);
		if (n != 0) printf("n=%d, |n|=%d\n", n, abs(n));
		else break;
	}
	
	printf("0�� �ԷµǾ� ����Ǿ����ϴ�.\n");
	return 0;
}

int abs(int n)
{
	if (n < 0)n = - n;
	return n;
}