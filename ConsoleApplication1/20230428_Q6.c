#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
	����ڷκ��� ���� ���� M�� N�� �Է¹޾� N�� ��ŭ M�� ����� ����ϴ� ���α׷��� �ۼ�
*/

int main()
{
	int M, N;
	printf("�� ���� ���� M�� N�� �Է��ϼ��� : ");
	scanf("%d%d", &M, &N);

	for (int i = 0; i < N; i++)
	{
		int temp = M * (i + 1);
		printf("%d ", temp);
	}
}