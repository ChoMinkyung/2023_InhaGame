#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/*
	Q1. 야구 게임
	세 개의 숫자를 입력 받아서 다음과 같이 숫자가 있지만
	그 위치가 틀렸을 때는 "ball"을 출력하고,
	숫자와 위치가 맞으면 "strike"를 출력한다.
	숫자와 위치가 전부 틀리면 "out"출력하는 프로그램을 작성하라.
	무엇이 볼이고 스트라이크 인지는 출력하지 않는다.
	세 개의 숫자와 위치가 다 맞으면 "homerun"으로 표시
*/

int main()
{
	int answer[3];
	int try_answer[3];
	int homerun = 0;
	int strike = 0, ball = 0;

	int random = 0;

	for (int i = 0; i < 3; i++) { // 3번 반복
		srand(time(NULL)); // 매번 다른 시드값 생성
		random = rand() % 9 + 1;// 난수 생성
		for (int j = 0; j < i; j++)
		{
			if (random == answer[j])
			{
				i--;
				continue;
			}
		}
		answer[i] = random;

	}

	printf("정답 : %d %d %d\n", answer[0], answer[1], answer[2]);
	while (homerun == 0)
	{
		printf("세 숫자를 입력하세요 : ");
		for (int i = 0; i < 3; i++)
		{
			scanf("%d", &try_answer[i]);
			
			for (int j = 0; j < 3; j++)
			{
				if (try_answer[i] == answer[j])
				{
					if (i == j) strike++;
					else ball++;
				}
			}
		}

		if (strike == 3) homerun = 1;
		else if (strike == 0 && ball == 0) printf("OUT\n");
		else
		{
			printf(" %dS %dB\n", strike, ball);
			strike = 0;
			ball = 0;
		}

	}

	printf("Homerun 입니다. 게임이 종료되었습니다.\n");
}