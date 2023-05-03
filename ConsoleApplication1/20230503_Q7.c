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
	printf("1:���� 2:���� 3:���� 4:������ 0:����\n");

	printf("���ϴ� ������ �����ϼ��� : ");
	scanf_s("%d", &select);
	while (select != 0)
	{

		printf("�� ������ �Է��ϼ��� : ");
		scanf_s("%d%d", &x, &y);

		switch (select)
		{
		case 1:
			printf("���ϱ� ����� %d�Դϴ�.\n", plus(x, y));
			break;
		case 2:
			printf("���� ����� %d�Դϴ�.\n", minus(x, y));
			break;
		case 3:
			printf("���ϱ� ����� %d�Դϴ�.\n", multiple(x, y));
			break;
		case 4:
			printf("������ ����� %.1f�Դϴ�.\n", division(x, y));
			break;
		default:
			break;
		}

		printf("���ϴ� ������ �����ϼ��� : ");
		scanf_s("%d", &select);
	}
	printf("0�� �ԷµǾ� ����Ǿ����ϴ�.\n");
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