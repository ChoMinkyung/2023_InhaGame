#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
	Q7. ����ڷκ��� ��� ������ �Է¹޾� �� ���� ���س����� ���α׷��� �ۼ��϶�.
	��, ����ڰ� 0�� �Է��� ������ ��� �Ǿ�� �ϸ�, 
	0�� �ԷµǸ� �Էµ� ��� ������ ���� ����Ѵ�.
*/

int main()
{	
	int n, S=0;
	
	do
	{
		printf("���� n�� �Է��ϼ��� : ");
		scanf("%d", &n);
		S += n;
	} while (n != 0);
	printf("�Է��� ��� ������ ���� %d�Դϴ�.", S);
}