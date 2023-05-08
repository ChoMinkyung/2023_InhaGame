#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

char* my_strcpy(char* pd, char* ps);
char* my_strcat(char* pd, char* ps);
char* my_strncat(char* pd, char* ps, int n);

void assign10(void);
void assign20(void);

//int a;

void auto_func(void);
void static_func(void);

int main(void)
{
	/*printf("apple�� ����� ���� �ּ� �� : %p\n", "apple");
	printf("�� ��° ������ �ּ� �� : %p\n", "apple" + 1);
	printf("ù ��° ���� : %c\n", *"apple");
	printf("�� ��° ���� : %c\n", *("apple" + 1));
	printf("�迭�� ǥ���� �� ��° ���� : %c\n", "apple"[2]);

	char szBuf[20] = { "Test String" };
	char* pszData = "Test String";

	printf("%p\n", szBuf);
	printf("%p\n", pszData);
	printf("%p\n", "Test String");

	printf("%d\n", szBuf == "Test String");

	char str[80];
	printf("������ ���Ե� ���ڿ� : ");
	fgets(str, sizeof(str), stdin);
	str[strlen(str) - 1] = '\0';
	printf("�Էµ� ���ڿ��� %s�Դϴ�.\n", str);

	int age;
	char name[20];

	printf("���� �Է� : ");
	scanf("%d", &age);

	printf("�̸� �Է� : ");
	gets(name);
	printf("���� : %d, �̸� : %s\n", age, name);

	char str[80] = "apple juice";
	char* ps = "banana\n";
	puts(str);
	fputs(ps, stdout);
	puts("milk");


	int a = 10;
	int b = 20;

	char c[10] = "apple";
	char d[10] = "pie";

	printf("%d\n", a + b);
	printf("%d\n", c + d);


	char str1[80] = "strawberry";

	str1[0] = 'a';
	str1[1] = 'p';
	str1[2] = 'p';
	str1[3] = 'l';
	str1[4] = 'e';
	//str1[5] = '\0';

	char str2[80] = "apple";
	char* ps1 = "banana";
	char* ps2 = str2;

	printf("���� ���ڿ� : %s\n", str1);
	strcpy(str1, str2);
	printf("�ٲ� ���ڿ� : %s\n", str1);

	strcpy(str1, ps1);
	printf("�ٲ� ���ڿ� : %s\n", str1);

	strcpy(str1, ps2);
	printf("�ٲ� ���ڿ� : %s\n", str1);

	strcpy(str1, "banana");
	printf("�ٲ� ���ڿ� : %s\n", str1);


	printf("%s\n", str1);

	char str[80] = "straw";
	strcat(str, "berry");
	printf("%s\n", str);
	strncat(str, "piece", 3);
	printf("%s\n", str);

	char str1[80], str2[80];
	char* resp;

	printf("2���� ���� �̸� �Է� : ");
	scanf("%s%s", str1, str2);
	if (strlen(str1) > strlen(str2)) resp = str1;
	else resp = str2;

	printf("�̸��� �� ������ : %s\n", resp);


	char str1[80] = "pear";
	char str2[80] = "peach";

	printf("������ ���߿� ������ ���� �̸� :");
	if (strcmp(str1, str2) > 0) printf("%s\n", str1);
	else if (strcmp(str1, str2) == 0) printf("\n�� �ܾ� ��� %s�Դϴ�.\n", str1);
	else printf("%s\n", str2);

	printf("�տ��� 3���� ���ڸ� ���ϸ�? ");
	if (strncmp(str1, str2, 3) == 0) printf("����.\n");
	else printf("�ٸ���.\n");

	char str[80] = "strawberry";
	printf("�ٲٱ� �� ���ڿ� : %s\n", str);
	my_strcpy(str, "apple");
	printf("�ٲ� �� ���ڿ� : %s\n", str);
	my_strcpy(str, "kiwi");
	printf("�ٸ� ���ڿ� ���� : %s\n",str);

	printf("���ڿ� ���̱� : %s\n", my_strcat(str, "Good"));
	printf("���ڿ� 3���� ���̱� : %s\n", my_strncat(str, "ABCDEFG",3));

	printf("�Լ� ȣ�� �� a �� : %d\n", a);

	assign10();
	assign20();

	printf("�Լ� ȣ�� �� a �� : %d\n", a);

	*/


	int i;

	printf("�Ϲ� ���� ����(auto)�� ����ϳ� �Լ�...\n");
	for (i = 0; i < 3; i++)
	{
		auto_func();
	}

	printf("���� ���� ����(static)�� ����� �Լ�...\n");
	for (i = 0; i < 3; i++)
	{
		static_func();
	}

	return 0;
}

void auto_func(void)
{
	auto int a = 0;
	a++;
	printf("%d\n", a);
}

void static_func(void)
{
	static int a;
	a++;
	printf("%d\n", a);
}

//void assign10(void)
//{
//	a = 10;
//}
//
//void assign20(void)
//{
//	int a;
//	a = 20;
//}

char* my_strcpy(char* pd, char* ps)
{
	//char* po = pd;

	while (*ps != '\0')
	{
		*pd = *ps;
		pd++;
		ps++;
	}
	*pd = '\0';
	return 0;
}

char* my_strcat(char* pd, char* ps)
{
	char* po = pd;  // �迭�� ó�� ��ġ ����

	while (*pd != '\0') pd++; // pd�� �� ������ ��ġ�� �̵�

	while (*ps != '\0')
	{
		*pd = *ps;
		pd++;
		ps++;
	}

	*pd = '\0';

	return po;
}

char* my_strncat(char* pd, char* ps, int n)
{
	char* po = pd;

	while (*pd != '\0') pd++;

	for (int i = 0; i < n; i++)
	{
		*pd = *ps;
		pd++;
		ps++;
	}

	*pd = '\0';

	return po;
}

