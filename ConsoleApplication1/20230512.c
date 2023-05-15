#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


void print_str(char** ps);

struct profile
{
	int age;
	double height;
};

struct student
{
	struct profile pf;
	int id;
	double grade;
};

struct address
{
	char name[20];
	int age;
	char tel[20];
	char addr[80];
};

struct list
{
	int num;
	struct list* next;
};

enum season{SPRING, SUMMER, FALL, WINTER};

int main() //int argc, char**argv
{
	/*
	char temp[80];
	char* str[3] = { 0 };
	int i = 0;

	for (i = 0; i < 3; i++)
	{
		printf("문자열을 입력하세요 : ");
		gets(temp);
		str[i] = (char*)malloc(strlen(temp) + 1);
		strcpy(str[i], temp);
	}

	for (i = 0; i < 3; i++)
	{
		printf("%s\n", str[i]);
	}

	for (i = 0; i < 3; i++)
	{
		free(str[i]);
	}

	char temp[80];
	char* str[21] = { 0 };
	int i = 0;

	while (i < 20)
	{
		printf("문자열을 입력하세요 : ");
		gets(temp);
		if (strcmp(temp, "end") == 0)break;
		str[i] = (char*)malloc(strlen(temp) + 1);
		strcpy(str[i], temp);
		i++;
	}

	print_str(str);

	for (i = 0; str[i] != NULL; i++)
	{
		free(str[i]);
	}

	int i;
	for (i = 0; i < argc;i++)
	{
		printf("%s\n", argv[i]);
	}


	struct student yuni;

	yuni.pf.age = 17;
	yuni.pf.height = 164.5;
	yuni.id = 315;
	yuni.grade = 4.3;

	printf("나이:%d\n", yuni.pf.age);
	printf("키:%.1lf\n", yuni.pf.height);
	printf("학번:%d\n", yuni.id);
	printf("학점:%.1lf\n", yuni.grade);

	struct address list[5];

	for (int i = 0; i < 5; i++)
	{
		scanf("%s", &list[i].name);
		scanf("%d", &list[i].age);
		scanf("%s", &list[i].tel);
		gets(list[i].addr);
	}

	for (int i = 0; i < 5; i++)
	{
		printf("%10s%5d%15s%20s\n", list[i].name, list[i].age, list[i].tel, list[i].addr);
	}

	struct list a = { 10, 0 }, b = { 20, 0 }, c = { 30, 0 };
	struct list* head = &a, * current;

	a.next = &b;
	b.next = &c;

	printf("head->num:%d\n", head->num);
	printf("head->next->num:%d\n", head->next->num);

	printf("list all:");
	current = head;
	while (current != NULL)
	{
		printf("%d ", current->num);
		current = current->next;
	}

	printf("\n");
	*/

	enum season ss;
	char* pc = NULL;

	ss = SPRING;
	switch (ss)
	{
	case SPRING:
		pc = "inline";
		break;
	case SUMMER:
		pc = "swimming";
		break;
	case FALL:
		pc = "trip";
		break;
	case WINTER:
		pc = "skiing";
		break;
	default:
		break;
	}

	printf("나의 레저활동=>%s\n", pc);

}

void print_str(char** ps)
{
	while (*ps != NULL)
	{
		printf("%s\n", *ps);
		ps++;
	}
}