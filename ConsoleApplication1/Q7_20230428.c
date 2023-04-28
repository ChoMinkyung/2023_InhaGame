#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
	Q7. 사용자로부터 계속 정수를 입력받아 그 값을 더해나가는 프로그램을 작성하라.
	단, 사용자가 0을 입력할 때까지 계속 되어야 하며, 
	0이 입력되면 입력된 모든 정수의 합을 출력한다.
*/

int main()
{	
	int n, S=0;
	
	do
	{
		printf("정수 n을 입력하세요 : ");
		scanf("%d", &n);
		S += n;
	} while (n != 0);
	printf("입력한 모든 정수의 합은 %d입니다.", S);
}