#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main()
{
	char sen[40];
	char new_sen[40] = { "" };

	printf("������ �Է��ϼ��� : ");
	gets(sen);

	char* pS = sen;
	
	pS = pS + strlen(sen);

	for (int i = 0; i < strlen(sen); i++)
	{
		pS--;
		strncat(new_sen, pS, 1);

		
	}

	printf("�ٲ� ���� : %s", new_sen);
}