#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <Windows.h>

/*
	Q3. 문자열을 입력받아서 광고판 문자열이 흘러가듯이 출력되는 형태와 같이
	문자열이 출력되도록 프로그램을 작성하라.
	hello
	ello h
	llo he
	lo hel
	o hell
	 hello


	화면 지우기
*/

int main()
{
	char sen[20];
	gets(sen);
	strcat(sen, " ");
	
	while (1)
	{
		Sleep(200);//화면 지움
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