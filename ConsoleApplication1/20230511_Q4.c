#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/*

	사용자로부터 문자열을 입력받아서
	단어를 역으로 출력하는 프로그램을 작성하라.

	("Quit"가 입력될 때까지 반복되도록 한다.)

	입력 > I am happy.
	출력 > happy am I

	메모리 할당, 내용 복사 연습
*/

int main()
{
	char* sen = (char*)malloc(sizeof(char) * 100);
	if (sen == NULL)
	{
		printf("sen 메모리가 부족합니다.\n");
		exit(1);
	}
	
	int space = 0;
	int len = 0;
	printf("Quit를 입력하면 종료됩니다.\n");

	while (1)
	{
		int* word_start = (int*)malloc(sizeof(int) * 10);
		if (word_start == NULL)
		{
			printf("word_start 메모리가 부족합니다.\n");
			exit(1);
		}

		printf("문장을 입력하세요 : ");
		gets(sen);

		if (strcmp(sen, "Quit") == 0) break;

		for (int i = 0; i <= strlen(sen); i++)
		{
			if (sen[i] == ' ' || sen[i] =='\0')
			{
				word_start[space] = i-len;
				len = 0;
				space++;
				continue;
			}
			len++;
		}

		printf("반대로 출력 : ");
		for (int i = space-1;i >=0 ; i--)
		{
			for (int j = 0; j < 10; j++)
			{
				if (sen[(word_start[i] + j)] == ' ' || sen[word_start[i] + j] == '\0')
				{
					if(i!=0)printf(" ");
					break;
				}
				else printf("%c", sen[(word_start[i] + j)]);
			}
		}
		printf("\n\n");
		space = 0;
		len = 0;
		free(word_start);
	}


	free(sen);
}