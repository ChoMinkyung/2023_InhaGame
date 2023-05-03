#define _crt_secure_no_warnings

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int rec_func(int n);
int fac_func(int n);
int main()
{
	int n,  sum=0, fac=0;
	printf("자연수 n을 입력하세요 : ");
	scanf_s("%d", &n);

	sum = rec_func(n);
	fac = fac_func(n);
	printf("sum=%d, fac=%d\n", sum, fac);
}

int rec_func(int n)
{
	if (n == 0) return n;
	n += rec_func(n-1);
	return n;

}

int fac_func(int n)
{
	if (n == 1) return n;
	n *= fac_func(n - 1);
	return n;
}