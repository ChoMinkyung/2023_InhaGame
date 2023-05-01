//charter 06-2 반복문 활용
#define _crt_secure_no_warnings

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() 
{
	long long n;
	long long answer = 0;
	printf("n을 입력하세요 : ");
	scanf("%lld", &n);
	long long n2 = n;
	if (n > 1000000000000) n2 = n / 1000000;
	else n2 = n / 2;

	for (int i = 1; i <= n2; i++)
	{
		if (i == (long long)n / i)
		{
			answer = (i + 1) * (i + 1);
		}
		if (answer == 0) answer = -1;
	}
	printf("answer = %lld\n", answer);
}