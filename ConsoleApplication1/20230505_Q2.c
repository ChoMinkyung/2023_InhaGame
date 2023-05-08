#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main()
{
	char sen[40];
	char new_sen[40] = { "" };

	printf("문장을 입력하세요 : ");
	gets(sen);

	char* pS = sen;
	
	pS = pS + strlen(sen);

	for (int i = 0; i < strlen(sen); i++)
	{
		pS--;
		strncat(new_sen, pS, 1);

		
	}

	printf("바뀐 문장 : %s", new_sen);
}