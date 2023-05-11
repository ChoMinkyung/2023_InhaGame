#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/*
	Q3. p.448 ���� ���� ����
*/

void swap(char* type, void* a, void* b);

int main()
{
	int age_a, age_b;
	double hight_a, hight_b;
	
	printf("ù��° ����� ���̿� Ű �Է� : ");
	scanf("%d %lf", &age_a, &hight_a);

	printf("�ι�° ����� ���̿� Ű �Է� : ");
	scanf("%d %lf", &age_b, &hight_b);

	void* vp_1=&age_a;
	void* vp_2=&age_b;
	void* vp_3=&hight_a;
	void* vp_4=&hight_b;


	swap("int", vp_1, vp_2);
	swap("double", vp_3, vp_4);

	printf("ù��° ����� ���̿� Ű : %d, %.1lf\n", age_a, hight_a);
	printf("�ι�° ����� ���̿� Ű : %d, %.1lf\n", age_b, hight_b);


}

void swap(char*type, void*a, void* b)
{
	if (strcmp(type, "int")==0)
	{
		int temp =  *(int*)a;
		*(int*)a = *(int*)b;
		*(int*)b = temp;
	}
	
	if (strcmp(type, "double")==0)
	{
		double temp = *(double*)a;
		*(double*)a = *(double*)b;
		*(double*)b = temp;
	}
}