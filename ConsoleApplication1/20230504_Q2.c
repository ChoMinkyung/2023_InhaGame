#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/*
	p.232 ��ҹ��� ��ȯ ���α׷��� �ۼ��϶�.
*/


int main()
{
	char sen[80];
	gets(sen);

	char result[80];
	strcpy(result, sen);
	for (int i = 0; i < strlen(result);i++)
	{
		if (result[i] > 64 && result[i] < 91) result[i] += 32;
	}
	puts(result);

	strcpy(result, sen);

	for (int i = 0; i < strlen(result);i++)
	{
		if (result[i] > 96 && result[i] < 123) result[i] -= 32;
	}
	puts(result);

}
