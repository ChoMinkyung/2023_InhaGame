//chapter 03 변수와 데이터 입력, 04 연산자
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
	char alphabet;
	char alphabet_3;

	int year;
	float pi;
	double doublePI;

	alphabet = 'A';

	char alphabetA = 'A';
	char askiiA = 65;

	printf("문자 %c의 아스키 코드 값 : %d\n", alphabetA, alphabetA);
	printf("아스키 코드 값이 %d인 문자 : %c\n", askiiA, askiiA);

	year = 2023;
	pi = 3.14f;
	doublePI = 3.14f;
	printf("%d\n", sizeof(pi));

	float ft = 1.234567890123456789f;
	double db = 1.234567890123456789;

	printf("float : %.20f\n", ft);
	printf("double : %.20f\n", db);

	float f1 = 0;

	for (int i = 0; i < 10; i++)
	{
		f1 = f1 + 0.1;
		printf("%d번째 : %.20f\n", i, f1);
	}

	printf("f1 10번 더함 : %.20f\n", f1);

	char list[4] = "ABC";
	printf("%c %d %d %s\n", list[0], list[1], list[2], list);

	strcpy(list, "DEF");
	//strcpy_s(list, 4, "GHI");

	printf("%s\n", list);

	int nNumber;
	int iNumber;
	char cA = 'a';
	char strName[128];
	char sName[128];
	float fNumber = 0.0f;
	double dNumber = 0;
	
	int kor = 70, eng = 80, mat = 90;
	int tot;

	tot = kor + eng + mat;

	printf("국어 : %d, 영어 : %d, 수학 : %d\n총점 : %d", kor, eng, mat, tot);
	

	char name[100];
	int age;
	float height;
	printf("이름을 입력하세요 : ");
	scanf("%s", name);
	//getchar(); scanf 중 버퍼 비울때 사용
	printf("나이를 입력하세요 : ");
	scanf("%d", &age);
	printf("키를 입력하세요 : ");
	scanf("%f", &height);

	printf("이름은 %s, 나이는 %d, 키는 %.1f 입니다.\n",name, age, height);

	float a1, a2;
	int b1, b2;

	a1 = 5.0 / 2;
	b1 = 5.0 / 2;

	a2 = 5 / 2.0;
	b2 = 5 / 2.0;

	printf("실수 나누기 정수 float : %.1f, int : %d\n정수 나누기 실수 float : %.1f, int : %d\n", a1, b1, a2, b2);

	int a = 5, b = 5;
	int pre, post;

	printf("현재 a=%d, b=%d\n", a, b);

	pre = (++a) * 3;
	post = (b++) * 3;

	printf("전위형:(++a)*3=%d, 후위형:(b++)*3=%d\n", pre, post);

	double a = 4.0, b = 1.2;

	printf("%.1lf + %.1lf = %.1f\n", a, b, a + b);
	printf("%.1lf - %.1lf = %.1f\n", a, b, a - b);
	printf("%.1lf * %.1lf = %.1f\n", a, b, a * b);
	printf("%.1lf / %.1lf = %.1f\n", a, b, a / b);

	printf("\n");

	int c, d, tot;
	double avg;

	printf("두 과목의 점수 : ");
	scanf("%d%d", &c, &d);
	tot = c + d;
	avg = tot / 2.0;
	printf("평균 : %.1lf\n", avg);

	char a[3] = "Hi";
	printf("a[1");


	system("pause");
}