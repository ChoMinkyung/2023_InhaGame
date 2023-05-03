#define _crt_secure_no_warnings

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/*
	p.177 도전 실전 예제
	소수 출력!
*/

int input();
void output(int pn);

int main()
{
	output(input());
}

int input()
{
	int pn;
	printf("2 이상의 정수를 입력하세요 : ");
	scanf_s("%d", &pn);

	while (pn < 2)
	{
		printf("2 이상의 정수로 다시 입력하세요 : ");
		scanf_s("%d", &pn);

	}
	return pn;
}

void output(int pn)
{
	int tf = 1;
	int count = 0;

	for (int i = 2; i <= pn; i++)
	{
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0) tf = 0;
			//printf("i=%d j=%d %d\n", i, j, tf);
		}
		if (tf == 1)
		{
			if (count % 5 == 0)printf("\n\n");
			printf("%3d ", i);
			count++;

		}
		tf = 1;
	}
}
