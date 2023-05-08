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
	/*printf("apple이 저장된 시작 주소 값 : %p\n", "apple");
	printf("두 번째 문자의 주소 값 : %p\n", "apple" + 1);
	printf("첫 번째 문자 : %c\n", *"apple");
	printf("두 번째 문자 : %c\n", *("apple" + 1));
	printf("배열로 표현한 세 번째 문자 : %c\n", "apple"[2]);

	char szBuf[20] = { "Test String" };
	char* pszData = "Test String";

	printf("%p\n", szBuf);
	printf("%p\n", pszData);
	printf("%p\n", "Test String");

	printf("%d\n", szBuf == "Test String");

	char str[80];
	printf("공백이 포함된 문자열 : ");
	fgets(str, sizeof(str), stdin);
	str[strlen(str) - 1] = '\0';
	printf("입력된 문자열은 %s입니다.\n", str);

	int age;
	char name[20];

	printf("나이 입력 : ");
	scanf("%d", &age);

	printf("이름 입력 : ");
	gets(name);
	printf("나이 : %d, 이름 : %s\n", age, name);

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

	printf("최초 문자열 : %s\n", str1);
	strcpy(str1, str2);
	printf("바뀐 문자열 : %s\n", str1);

	strcpy(str1, ps1);
	printf("바뀐 문자열 : %s\n", str1);

	strcpy(str1, ps2);
	printf("바뀐 문자열 : %s\n", str1);

	strcpy(str1, "banana");
	printf("바뀐 문자열 : %s\n", str1);


	printf("%s\n", str1);

	char str[80] = "straw";
	strcat(str, "berry");
	printf("%s\n", str);
	strncat(str, "piece", 3);
	printf("%s\n", str);

	char str1[80], str2[80];
	char* resp;

	printf("2개의 과일 이름 입력 : ");
	scanf("%s%s", str1, str2);
	if (strlen(str1) > strlen(str2)) resp = str1;
	else resp = str2;

	printf("이름이 긴 과일은 : %s\n", resp);


	char str1[80] = "pear";
	char str2[80] = "peach";

	printf("사전에 나중에 나오는 과일 이름 :");
	if (strcmp(str1, str2) > 0) printf("%s\n", str1);
	else if (strcmp(str1, str2) == 0) printf("\n두 단어 모두 %s입니다.\n", str1);
	else printf("%s\n", str2);

	printf("앞에서 3개의 문자만 비교하면? ");
	if (strncmp(str1, str2, 3) == 0) printf("같다.\n");
	else printf("다르다.\n");

	char str[80] = "strawberry";
	printf("바꾸기 전 문자열 : %s\n", str);
	my_strcpy(str, "apple");
	printf("바꾼 후 문자열 : %s\n", str);
	my_strcpy(str, "kiwi");
	printf("다른 문자열 대입 : %s\n",str);

	printf("문자열 붙이기 : %s\n", my_strcat(str, "Good"));
	printf("문자열 3개만 붙이기 : %s\n", my_strncat(str, "ABCDEFG",3));

	printf("함수 호출 전 a 값 : %d\n", a);

	assign10();
	assign20();

	printf("함수 호출 전 a 값 : %d\n", a);

	*/


	int i;

	printf("일반 지역 변수(auto)를 사용하나 함수...\n");
	for (i = 0; i < 3; i++)
	{
		auto_func();
	}

	printf("정적 지역 변수(static)를 사용한 함수...\n");
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
	char* po = pd;  // 배열의 처음 위치 보관

	while (*pd != '\0') pd++; // pd를 널 문자의 위치로 이동

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

