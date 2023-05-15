#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <Windows.h>

/*

	Q2. 99.txt 파일을 만들고, 여기에 구구단을 저장하도록 한다.
	그리고 fseek()을 이용해서 원하는 구구단의 내용만을 찾아 출력하는 프로그램을 작성하라.

	ex) 몇 단을 출력? 2

	2단
	=========================
	2X1 = 2
	.....
	2X9=18

*/

int main()
{
	FILE* fp;
	int N = 9; // 몇단까지 txt 파일에 작성할 것인지
	int n; // 몇단을 출력할 것인지
	char str[30];
	int res;
	int line_len = 0;
	fp = fopen("99.txt", "r+");

	for (int i = 2; i <= N;i++)
	{
		for (int j = 1; j < 10; j++)
		{
			fprintf(fp, "%4d  X %4d = %4d\n", i, j, i * j);
		}
	}

	fseek(fp, 0, SEEK_SET);
	res = fgets(str, sizeof(str), fp);
	line_len = strlen(str);

	printf("몇단을 출력할까요? : ");
	scanf("%d", &n);

	printf("\n======%d단======\n", n);
	fseek(fp, (line_len+1) * 9 * (n - 2), SEEK_SET);

	for (int i = 0; i < 9; i++)
	{
		res = fgets(str, sizeof(str), fp);

		if (res == NULL)break;
		printf("%s\n", str);
	}
	printf("===============\n");
	fclose(fp);
}