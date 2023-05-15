//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <stdbool.h>
//#include <Windows.h>
//
//void my_fflush(FILE* fp);
//
//int main()
//{
//	FILE* fp;
//	int age;
//	char name[20];
//
//	fp = fopen("a.txt", "r");
//
//	fscanf(fp, "%d", &age);
//	my_fflush(fp);
//	fgets(name, sizeof(name), fp);
//
//	printf("나이:%d, 이름:%s", age, name);
//	fclose(fp);
//
//
//	/*
//	FILE* ifp, * ofp;
//	char name[20];
//	int kor, eng, math;
//	int total;
//	double avg;
//	int res;
//
//	ifp = fopen("a.txt", "r");
//
//	if (ifp == NULL)
//	{
//		printf("입력 파일을 열지 못했습니다.\n");
//		return 1;
//	}
//
//	ofp = fopen("b.txt", "w");
//	if (ofp == NULL)
//	{
//		printf("출력 파일을 열지 못했습니다.\n");
//		return 1;	
//	}
//	
//	while (1)
//	{
//		res = fscanf(ifp, "%s%d%d%d", name, &kor, &eng, &math);
//		if (res == EOF)
//		{
//			break;
//		}
//		total = kor + eng + math;
//		avg = total / 3.0;
//		fprintf(ofp, "%s%5d%7.1lf\n", name, total, avg);
//	}
//
//	fclose(ifp);
//	fclose(ofp);
//
//	FILE* ifp, * ofp;
//	char str[80];
//	char* res;
//
//	ifp = fopen("a.txt", "r");
//	if (ifp == NULL)
//	{
//		printf("입력 파일을 열지 못했습니다.\n");
//		return 1;
//	}
//
//	ofp = fopen("b.txt", "w");
//	if (ofp == NULL)
//	{
//		printf("출력 파일을 열지 못했습니다.\n");
//		return 1;
//	}
//
//	while (1)
//	{
//		res = fgets(str, sizeof(str), ifp);
//		if (res == NULL)
//		{
//			break;
//		}
//		str[strlen(str) - 1] = '\0';
//		fputs(str, ofp);
//		fputs(" ", ofp);
//	}
//
//	fclose(ifp);
//	fclose(ofp);
//	FILE* fp;
//	char str[20];
//
//	fp = fopen("a.txt", "a+");
//	if (fp == NULL)
//	{
//		printf("파일을 찾기 못했습니다.\n");
//		return 1;
//	}
//
//	while (1)
//	{
//		printf("과일 이름 : ");
//		scanf("%s", str);
//		if (strcmp(str, "end") == 0)break;
//		else if (strcmp(str, "list") == 0)
//		{
//			fseek(fp, 0, SEEK_SET);
//			while (1)
//			{
//				fgets(str, sizeof(str), fp);
//				if (feof(fp))break;
//				printf("%s", str);
//			}
//		}
//		else
//		{
//			fprintf(fp, "%s\n", str);
//		}
//
//	}
//	fclose(fp);
//
//
//
//	
//	FILE* fp;
//	int ary[10] = { 13, 10, 13, 13, 10, 26, 13, 10, 13, 10 };
//	int i, res;
//
//	fp = fopen("a.txt", "wb");
//	for (i = 0; i < 10; i++)
//	{
//		fputc(ary[i], fp);
//	}
//	fclose(fp);
//
//	fp = fopen("a.txt", "rt");
//	while (1)
//	{
//		res = fgetc(fp);
//		if (res == EOF) break;
//		printf("%4d", res);
//	}
//	fclose(fp);
//
//	return 0;
//
//	int ch;
//	while (1)
//	{
//		ch = fgetc(stdin);
//		if (ch == EOF)break;
//	}
//
//	fputc(ch, stdout);
//
//	FILE* fp;
//
//	fp = fopen("b.txt", "w");
//
//	if (fp == NULL)
//	{
//		printf("파일이 열리지 않았습니다.\n");
//		return 1;
//	}
//
//	char str[] = "banana";
//	int i = 0;
//
//	while (str[i] != '\0')
//	{
//		fputc(str[i], fp);
//		i++;
//	}
//
//	printf("파일이 열렸습니다.\n");
//	fclose(fp);*/
//}
//
//void my_fflush(FILE* fp)
//{
//	while(fgetc(fp)!='\n'){}
//}