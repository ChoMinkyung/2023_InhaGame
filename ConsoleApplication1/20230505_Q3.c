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
		printf("번호 입력 : ");
		scanf("%d", lotto_nums+count);
		if (*(lotto_nums+count) > 0 && *(lotto_nums + count) < 46)
		{
			for (int i = 0; i < count; i++)
			{
				if (lotto_nums[i] == *(lotto_nums + count))
				{
					printf("같은 번호가 있습니다!\n");
					count_bool = true;
					break;
				}
			}
		}
		else
		{
			printf("1~45 사이의 숫자를 입력하세요!\n");
			count_bool = true;
		}
		if(count_bool ==0) count++;
		count_bool = false;
	}

}

void print_nums(int* lotto_nums)
{
	printf("로또 번호 : ");
	for (int i = 0; i < 6; i++)
	{
		printf("%d ", lotto_nums[i]);
	}
	printf("\n");
}