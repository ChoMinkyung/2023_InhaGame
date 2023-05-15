#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <Windows.h>

/*
	Q1.  p.554 도전 실전 예제
*/

int main()
{
	FILE* afp, * bfp, * cfp;
	char str_1[10];
	char str_2[10];
	char* res_a, *res_b;

	afp = fopen("a.txt", "r");
	if (afp == NULL)
	{
		printf("등록 파일을 찾지 못했습니다.\n");
		return 1;
	}

	bfp = fopen("b.txt", "r");
	if (bfp == NULL)
	{
		printf("입력 파일을 열지 못했습니다.\n");
		return 1;
	}

	cfp = fopen("c.txt", "w");
	if (cfp == NULL)
	{
		printf("출력 파일을 열지 못했습니다.\n");
		return 1;
	}

	while (1)
	{
		res_b = fgets(str_2, sizeof(str_2),bfp);
		while (1)
		{
			res_a = fgets(str_1, sizeof(str_1), afp);
			if (res_a == NULL) break;

			if (strcmp(str_1, str_2) == 0)
			{
				fseek(afp, 0, SEEK_SET);
				break;
			}
		}

		if (strcmp(str_1, str_2) != 0)
		{
			fputs(str_2, cfp);
			fseek(afp, 0, SEEK_SET);
		}
		
		if (res_b == NULL) break;

	}

	fclose(afp);
	fclose(bfp);
	fclose(cfp);

}