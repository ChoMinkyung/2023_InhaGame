#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/*
	Q1. �߱� ����
	�� ���� ���ڸ� �Է� �޾Ƽ� ������ ���� ���ڰ� ������
	�� ��ġ�� Ʋ���� ���� "ball"�� ����ϰ�,
	���ڿ� ��ġ�� ������ "strike"�� ����Ѵ�.
	���ڿ� ��ġ�� ���� Ʋ���� "out"����ϴ� ���α׷��� �ۼ��϶�.
	������ ���̰� ��Ʈ����ũ ������ ������� �ʴ´�.
	�� ���� ���ڿ� ��ġ�� �� ������ "homerun"���� ǥ��
*/

int main()
{
	int answer[3];
	int try_answer[3];
	int homerun = 0;
	int strike = 0, ball = 0;

	int random = 0;

	for (int i = 0; i < 3; i++) { // 3�� �ݺ�
		srand(time(NULL)); // �Ź� �ٸ� �õ尪 ����
		random = rand() % 9 + 1;// ���� ����
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

	printf("���� : %d %d %d\n", answer[0], answer[1], answer[2]);
	while (homerun == 0)
	{
		printf("�� ���ڸ� �Է��ϼ��� : ");
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

	printf("Homerun �Դϴ�. ������ ����Ǿ����ϴ�.\n");
}