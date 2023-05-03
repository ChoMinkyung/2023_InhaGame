#define _crt_secure_no_warnings

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/*
	������ �� ������ �Ѵ��� ������ ��� �ǰ�
	�ٽ� �Ѵ��� ������ ������ ���´�.
	���� �¾ ������ ���� �Ѵ��� ������
	��� �ǰ� �ٽ� �Ѵ� �ĺ��� ������ ���´ٰ� �� ��, 
	�����̰� �Ŵ� ������ ������ 1�� �� 
	��ü �������� ���� ������ �� �� �ֵ��� ���α׷��� �ۼ��϶�.
*/

int Snail(int baby_snail, int adult_snail, int month);

int main()
{
	int month, baby_snail=1, adult_snail = 0, total_sanil=0;
	printf("n�� �� ��ü �������� ���� ����ϴ� ���α׷� �Դϴ�.\nn�� �Է��ϼ��� : ");
	scanf_s("%d", &month);

	total_sanil = Snail(baby_snail, adult_snail, month);
	printf("%d�� �� ��ü �������� �� : %d", month, total_sanil);
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