#define _crt_secure_no_warnings

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/*
	������ ���� ���°� �ǵ��� �������� ����϶�.
	���ϴ� n�� �Է¹޾� n�ܱ��� ����Ѵ�.
	ex) n=6
	           �� �� ��
	--------------------------------
	2 X 1 = 2  3 X 1 = 3  4 X 1 = 4







	---------------------------------




*/


int main()
{
	int n;
	printf("������ ��ܱ��� ������� n�� �Է��ϼ��� : ");
	scanf_s("%d", &n);
	
	printf("\n                        �� �� ��                        \n");
	//printf("--------------------------------------------------------\n");
	int col = 3; 
	for (int i = 0; i < col; i++)
	{
		printf("-------------------");
	}
	printf("\n");
	for (int i = 0; i < (n+1) / col; i++)
	{
		for (int j = 1; j < 10;j++)
		{
			for (int k = 2+col*i; k < 2+col*(i+1) && k<= n; k++)
			{
				printf("%3d   X %3d  = %3d ", k, j, k * j);
			}
			printf("\n");
		}
		for (int j = 0; j < col; j++)
		{
			printf("-------------------");
		}
		printf("\n");
	}
}