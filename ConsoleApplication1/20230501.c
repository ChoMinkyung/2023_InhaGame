//charter 06-2 반복문 활용
#define _crt_secure_no_warnings

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    long long n;
    scanf_s("%lld", &n);

    int* answer = (int*)malloc(sizeof(int) * 12);
    int i = 0;
    while (n > 0)
    {
        answer[i] = n % 10;
        printf("%d %d", answer[i], answer);
       
        n = (n-n%10) / 10;
        printf(" %d\n", n);
        i++;
    }
    answer = (int)answer;
   
    printf("\n%d\n", answer);
}