#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main()
{

	char ch;
	int count = 0; 
	int max_len = 0;
	while ((ch = getchar()) != EOF)
	{
		if (ch == '\n')
		{
			if (max_len < count) max_len = count;
			count = -1;
		}
		count ++;
	}
	printf("가장 긴 단어의 길이 : %d", max_len);
}