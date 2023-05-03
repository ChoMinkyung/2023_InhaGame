#define _crt_secure_no_warnings

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/*
	달팽이 한 마리가 한달이 지나면 어른이 되고
	다시 한달이 지나면 새끼를 낳는다.
	새로 태어난 달팽이 역시 한달이 지나면
	어른이 되고 다시 한달 후부터 새끼를 낳는다고 할 때, 
	달팽이가 매달 새끼를 낳으면 1년 후 
	전체 달팽이의 수는 얼마인지 알 수 있도록 프로그램을 작성하라.
*/

int Snail(int baby_snail, int adult_snail, int month);

int main()
{
	int month, baby_snail=1, adult_snail = 0, total_sanil=0;
	printf("n달 후 전체 달팽이의 수를 출력하는 프로그램 입니다.\nn을 입력하세요 : ");
	scanf_s("%d", &month);

	total_sanil = Snail(baby_snail, adult_snail, month);
	printf("%d달 후 전체 달팽이의 수 : %d", month, total_sanil);
}

int Snail(int baby_snail, int adult_snail, int month)
{
	if (month > 0)
	{
		baby_snail = Snail(adult_snail, baby_snail + adult_snail, month - 1);
		return baby_snail;
	}
	else return baby_snail + adult_snail;
}