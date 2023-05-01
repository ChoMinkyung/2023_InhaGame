#define _crt_secure_no_warnings

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/*
	다음과 같이 형태가 되도록 구구단을 출력하라.
	원하는 n을 입력받아 n단까지 출력한다.
	ex) n=6
	           구 구 단
	--------------------------------
	2 X 1 = 2  3 X 1 = 3  4 X 1 = 4







	---------------------------------




*/


int main()
{
	int n;
	printf("구구단 몇단까지 출력할지 n을 입력하세요 : ");
	scanf_s("%d", &n);
	
	printf("\n                        구 구 단                        \n");
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