#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

void input_nums(int* lotto_nums);
void print_nums(int* lotto_nums);

int main(void)
{
	int lotto_nums[6];

	input_nums(lotto_nums);
	print_nums(lotto_nums);
	return 0;
}

void input_nums(int* lotto_nums)
{
	int count = 0;
	int temp=0;
	bool count_bool = false;
	while (count < 6)
	{
		printf("��ȣ �Է� : ");
		scanf("%d", lotto_nums+count);
		if (*(lotto_nums+count) > 0 && *(lotto_nums + count) < 46)
		{
			for (int i = 0; i < count; i++)
			{
				if (lotto_nums[i] == *(lotto_nums + count))
				{
					printf("���� ��ȣ�� �ֽ��ϴ�!\n");
					count_bool = true;
					break;
				}
			}
		}
		else
		{
			printf("1~45 ������ ���ڸ� �Է��ϼ���!\n");
			count_bool = true;
		}
		if(count_bool ==0) count++;
		count_bool = false;
	}

}

void print_nums(int* lotto_nums)
{
	printf("�ζ� ��ȣ : ");
	for (int i = 0; i < 6; i++)
	{
		printf("%d ", lotto_nums[i]);
	}
	printf("\n");
}