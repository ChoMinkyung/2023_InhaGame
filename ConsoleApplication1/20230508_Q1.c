#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int my_strcmp(char* pa, char* pb);
char* word_sort(char* pa, char* pb);

int main()
{
	printf("세 단어를 입력하세요 : ");
	char str1[12], str2[12], str3[12];
	scanf("%s%s%s", str1, str2, str3);

	char* p1 = str1;
	char* p2 = str2;
	char* p3 = str3;
	char* temp[12];



	if (my_strcmp(str1, str2) > 0)
	{
		strcpy(temp, str1);
		strcpy(str1, str2);
		strcpy(str2, temp);
	}

	if (my_strcmp(str2, str3) > 0)
	{
		strcpy(temp, str2);
		strcpy(str2, str3);
		strcpy(str3, temp);
	}

	if (my_strcmp(str1, str2) > 0)
	{
		strcpy(temp, str1);
		strcpy(str1, str2);
		strcpy(str2, temp);
	}

	printf("% s % s % s", str1, str2, str3);

	//word_sort(p1, p2);
	//word_sort(p2, p3);
	//word_sort(p1, p2);
}

int my_strcmp(char* pa, char* pb)
{
	char temp_a;
	char temp_b;
	do {
		if (*pa >= 'A' && *pa <= 'Z')
		{
			temp_a = *pa + 32;
		}
		else temp_a = *pa;
		if (*pb >= 'A' && *pb <= 'Z')
			temp_b = *pb + 32;
		else temp_b = *pb;

		*pa++;
		*pb++;
	} while ((temp_a == temp_b) && (temp_a != '\0'));

	if (temp_a > temp_b) return 1;
	else if (temp_a < temp_b) return -1;
	else return 0;
}

char* word_sort(char* pa, char* pb)
{
	if (my_strcmp(*pa, *pb) > 0)
	{
		char* temp = pa;
		pa = pb;
		pb = temp;
	}

}
