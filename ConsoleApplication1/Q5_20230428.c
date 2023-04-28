#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
	Q5. 두 수를 입력받아 두 수 사이에 존재하는 정수의 합을
	구하는 프로그램 작성
*/

int main()
{
	int n1, n2, S=0;

	printf("n1, n2를 입력하세요 : ");
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

	printf("%d와 %d 사이에 존재하는 모든 정수의 합은 %d입니다.", n1, n2, S);
}