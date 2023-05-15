#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <Windows.h>

/*

	 Q3. ���� ���� ���α׷� �����
	 ������ ���ϸ�� ���� �� �����Ǵ� ���� ���� �Է¹޾Ƽ�
	 ������ ������ �����ϴ� ���α׷� �ۼ�.
	 ��, txt ���� �Ӹ� �ƴ϶� �̹��� ���� ��.. ��� ������ ���Ͽ�
	 �� �����ϰ� ������ �� �־�� �Ѵ�.

	 ���� ���� ������ ������� ȭ�鿡 ǥ�����ֵ��� �ϰ�
	 �ѹ��� n ����Ʈ�� �����ϵ��� �Ѵ�.

	 ex) 4 ����Ʈ
		�������� : source. txt
		������� : dest.txt


*/

int main()
{
	char source[20] = "data/";
	char dest[20] = "data/";

	char input[20];

	FILE* sfp, * dfp;

	int n, m = 0, file_size = 0, res;
	printf("���� ���� ���� �Է��ϼ��� : ");
	scanf("%s", input);
	strcat(source, input);
	printf("���� �� ���� ���� �Է��ϼ��� : ");
	scanf("%s", input);
	strcat(dest, input);


	sfp = fopen(source, "r");
	dfp = fopen(dest, "w");

	if (sfp == NULL)
	{
		printf("���� ������ ���� �� �����ϴ�.\n");
		return 1;
	}
	if (dfp == NULL)
	{
		printf("���� �� ������ ���� �� �����ϴ�.\n");
		return 1;
	}

	fseek(sfp, 0, SEEK_END);
	file_size = ftell(sfp);

	printf("\nfilesize : %d\n", file_size);
	printf("�ѹ��� ������ ����Ʈ �� : ");
	scanf("%d", &n);
	res = 0;

	int remain = file_size;
	double per = 0;
	char *str = (char*)malloc(n+1);

	fseek(sfp, 0, SEEK_SET);

	while (1)
	{
		res = fgets(str, n+1, sfp);
		//printf("%d", sizeof(str));

		if (res == EOF) break;
		fputs(str, dfp);
		remain -= sizeof(str);
		per = remain /(double)file_size;
		printf("%d ", m * n);
		printf("������... %.2lf%%\n", per * 100);
		if (feof(sfp)) break;
		//Sleep(1000);
		//system("cls");

		m++;
	}

	printf("��!");

	fclose(sfp);
	fclose(dfp);

}