#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int n, F=1;
	printf("n�� �Է��ϼ��� : ");
	scanf("%d", &n);

	for (int i = n; i > 0; i--)
	{	
		F*=i;
	}

	printf("%d!=%d\n",n, F);
}