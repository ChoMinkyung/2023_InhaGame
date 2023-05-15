#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <Windows.h>

/*

	Q2. 99.txt ������ �����, ���⿡ �������� �����ϵ��� �Ѵ�.
	�׸��� fseek()�� �̿��ؼ� ���ϴ� �������� ���븸�� ã�� ����ϴ� ���α׷��� �ۼ��϶�.

	ex) �� ���� ���? 2

	2��
	=========================
	2X1 = 2
	.....
	2X9=18

*/

int main()
{
	FILE* fp;
	int N = 9; // ��ܱ��� txt ���Ͽ� �ۼ��� ������
	int n; // ����� ����� ������
	char str[30];
	int res;
	int line_len = 0;
	fp = fopen("99.txt", "r+");

	for (int i = 2; i <= N;i++)
	{
		for (int j = 1; j < 10; j++)
		{
			fprintf(fp, "%4d  X %4d = %4d\n", i, j, i * j);
		}
	}

	fseek(fp, 0, SEEK_SET);
	res = fgets(str, sizeof(str), fp);
	line_len = strlen(str);

	printf("����� ����ұ��? : ");
	scanf("%d", &n);

	printf("\n======%d��======\n", n);
	fseek(fp, (line_len+1) * 9 * (n - 2), SEEK_SET);

	for (int i = 0; i < 9; i++)
	{
		res = fgets(str, sizeof(str), fp);

		if (res == NULL)break;
		printf("%s\n", str);
	}
	printf("===============\n");
	fclose(fp);
}