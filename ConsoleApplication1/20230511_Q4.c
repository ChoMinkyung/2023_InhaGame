#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/*

	����ڷκ��� ���ڿ��� �Է¹޾Ƽ�
	�ܾ ������ ����ϴ� ���α׷��� �ۼ��϶�.

	("Quit"�� �Էµ� ������ �ݺ��ǵ��� �Ѵ�.)

	�Է� > I am happy.
	��� > happy am I

	�޸� �Ҵ�, ���� ���� ����
*/

int main()
{
	char* sen = (char*)malloc(sizeof(char) * 100);
	if (sen == NULL)
	{
		printf("sen �޸𸮰� �����մϴ�.\n");
		exit(1);
	}
	
	int space = 0;
	int len = 0;
	printf("Quit�� �Է��ϸ� ����˴ϴ�.\n");

	while (1)
	{
		int* word_start = (int*)malloc(sizeof(int) * 10);
		if (word_start == NULL)
		{
			printf("word_start �޸𸮰� �����մϴ�.\n");
			exit(1);
		}

		printf("������ �Է��ϼ��� : ");
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

		printf("�ݴ�� ��� : ");
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