#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/*
	Q2. "I am a boy. I'm happy!" ���ڿ��� �ִµ�
	���� boy�� ��ġ�ּҸ� ����ϰ� boy�� girl�� �ٲپ�
	����ϴ� ���α׷��� �ۼ��϶�.

	��°�� >
	boy ��ġ �ּ� : OFF2 C400
	�ٲ� ���ڿ� : I am girl. I'm happy!
*/

int main()
{
	char sen[40];// = { "I am a boy. I'm happy!" }; // �־��� ����
	char find[10];// = { "boy" }; // ã�� �ܾ�
	char change[10];// = { "girl" }; // �ٲ� �ܾ�
	char new_sen[40] = { "" };

	printf("������ �Է��ϼ��� : ");
	gets(sen);
	printf("ã�� �ܾ �Է��ϼ��� : ");
	gets(find);
	printf("�ٲ� �ܾ �Է��ϼ��� : ");
	gets(change);

	char* pS = sen;
	char* pF = find;
	char* pC = change;

	printf("���� ���� : %s\n", sen);
	printf("%s -> %s\n", find, change);
	printf("%s ��ġ �ּ� : ", find);
	while (*pS != '\0')
	{
		if (*pS != *pF)
		{
			strncat(new_sen, pS, 1);
		}
		if (*pS == *pF)
		{
			for (int i = 1; i < strlen(find); i++)
			{
				pF++;
				pS++;
				if (*pS != *pF)
				{
					pS = pS - i-1;
					break;
				}
				else if (*pS == *pF && i==strlen(find)-1)
				{
					printf("%p\n", pS);
					strcat(new_sen, pC);
					break;
				}	
			}

		}
		pS++;
	}

	printf("�ٲ� ���� : %s\n", new_sen);

}