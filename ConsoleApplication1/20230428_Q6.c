#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
	사용자로부터 양의 정수 M과 N을 입력받아 N개 만큼 M의 배수를 출력하는 프로그램을 작성
*/

int main()
{
	int M, N;
	printf("두 양의 정수 M과 N을 입력하세요 : ");
	scanf("%d%d", &M, &N);

	for (int i = 0; i < N; i++)
	{
		int temp = M * (i + 1);
		printf("%d ", temp);
	}
}