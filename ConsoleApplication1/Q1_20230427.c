#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	/*
		Q1. 기대수명 계산하기
		인간 수명이 100년이라고 가정하고
		담배 한 개비를 피우면 수명이 3시간 40분 단축된다고 한다.

		어떤 사람이 성인(20살로 가정)이 된 이후
		N년간 하루에 M개피씩 담배를 피웠다면
		수명은 얼마나 단축되었고 몇 살까지 살 수 있는가?

		결과
		N=20, M=3
		줄어든 수명 : 00일 00시 00분
		기대 수명 : 00살 00일 00시 00분
	*/
	int age = 20;
	int N, M; //N : 담배 피운 년수, M : 피운 담배 개피 수
	printf("담배피운 년수와 피운 담배 개피수를 입력하세요.\n");
	scanf("%d%d", &N, &M);

	//1년 = 365*24*60분 1일 = 24*60분 1시간 = 60분
	int one_year = 365 * 24 * 60, one_day = 24 * 60, one_hour = 60;

	int year = 0, day = 0, hour = 0, minute = 0;

	int dLifespan, eLifespan; // 줄어든 수명, 기대 수명

	eLifespan = 100 * 365 * 24 * 60;


	//3시간 40분 = 60*3 + 40 = 220분
	dLifespan = 220 * N * M * 365;

	year = dLifespan / one_year;
	day = (dLifespan - year * one_year) / one_day;
	hour = (dLifespan - year * one_year - day * one_day) / one_hour;
	minute = dLifespan - year * one_year - day * one_day - hour * one_hour;

	printf("줄어든 수명 : %d년 %d일 %d시간 %d분\n", year, day, hour, minute);

	eLifespan = eLifespan - dLifespan;

	year = eLifespan / one_year;
	day = (eLifespan - year * one_year) / one_day;
	hour = (eLifespan - year * one_year - day * one_day) / one_hour;
	minute = eLifespan - year * one_year - day * one_day - hour * one_hour;

	printf("기대 수명 : %d살 %d일 %d시간 %d분\n", year, day, hour, minute);
}