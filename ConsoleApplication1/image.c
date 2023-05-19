#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <Windows.h>

int main()
{
	FILE* fp;
	int res;
	int tmp;
	char str[256];
	fp = fopen("data/image.txt", "rt");

	//system("mode con cols=200");

	if (fp == NULL)
	{
		printf("½ÇÆÐ\n");
		exit(1);
	}

	while (fgets(str, 255, fp) != NULL)
	{
		printf(str);
	}
	puts("");

	fclose(fp);
}

