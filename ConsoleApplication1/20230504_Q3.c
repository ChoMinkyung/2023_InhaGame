#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <Windows.h>

/*
	Q3. ���ڿ��� �Է¹޾Ƽ� ������ ���ڿ��� �귯������ ��µǴ� ���¿� ����
	���ڿ��� ��µǵ��� ���α׷��� �ۼ��϶�.
	hello
	ello h
	llo he
	lo hel
	o hell
	 hello


	ȭ�� �����
*/

int main()
{
	char sen[20];
	gets(sen);
	strcat(sen, " ");
	
	while (1)
	{
		Sleep(200);//ȭ�� ����
		system("cls");

		int i = 0;
		char temp = sen[0];

		while (sen[i] != '\0')
		{
			if (sen[i + 1] == '\0') sen[i] = temp;
			else sen[i] = sen[i + 1];
			i++;
		}
		
		puts(sen);
		
	}
	
	
}