#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/*
	Q2. "I am a boy. I'm happy!" 문자열이 있는데
	이중 boy의 위치주소를 출력하고 boy를 girl로 바꾸어
	출력하는 프로그램을 작성하라.

	출력결과 >
	boy 위치 주소 : OFF2 C400
	바뀐 문자열 : I am girl. I'm happy!
*/

int main()
{
	char sen[40];// = { "I am a boy. I'm happy!" }; // 주어진 문장
	char find[10];// = { "boy" }; // 찾을 단어
	char change[10];// = { "girl" }; // 바꿀 단어
	char new_sen[40] = { "" };

	printf("문장을 입력하세요 : ");
	gets(sen);
	printf("찾을 단어를 입력하세요 : ");
	gets(find);
	printf("바꿀 단어를 입력하세요 : ");
	gets(change);

	char* pS = sen;
	char* pF = find;
	char* pC = change;

	printf("기존 문장 : %s\n", sen);
	printf("%s -> %s\n", find, change);
	printf("%s 위치 주소 : ", find);
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

	printf("바꾼 문장 : %s\n", new_sen);

}