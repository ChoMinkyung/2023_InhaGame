#define _crt_secure_no_warnings

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int plus(int x, int y);
int minus(int x, int y);
int multiple(int x, int y);
float division(int x, int y);

int main()
{
	int select;
	int x, y;
	printf("1:덧셈 2:뺄셈 3:곱셈 4:나눗셈 0:종료\n");

	printf("원하는 연산을 선택하세요 : ");
	scanf_s("%d", &select);
	while (select != 0)
	{

		printf("두 정수를 입력하세요 : ");
		scanf_s("%d%d", &x, &y);

		switch (select)
		{
		case 1:
			printf("더하기 결과는 %d입니다.\n", plus(x, y));
			break;
		case 2:
			printf("빼기 결과는 %d입니다.\n", minus(x, y));
			break;
		case 3:
			printf("곱하기 결과는 %d입니다.\n", multiple(x, y));
			break;
		case 4:
			printf("나누기 결과는 %.1f입니다.\n", division(x, y));
			break;
		default:
			break;
		}

		printf("원하는 연산을 선택하세요 : ");
		scanf_s("%d", &select);
	}
	printf("0이 입력되어 종료되었습니다.\n");
}

int plus(int x, int y)
{
	return x + y;
}

int minus(int x, int y)
{
	if (x - y < 0)return y - x;
	return x - y;
}

int multiple(int x, int y)
{
	return x * y;
}

float division(int x, int y)
{
	if (x / y < 1) return (float)y / x;
	return (float)x / y;
}