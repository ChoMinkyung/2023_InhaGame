//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <stdbool.h>
//#include <Windows.h>
//
//int main()
//{
//	FILE* sfp, * dfp;
//	int res;
//	int n_byte, n = 0, file_size = 0;
//
//
//	char source[20] = "data/";
//	char dest[20] = "data/";
//	char input[20];
//
//	printf("���� ���� ���� �Է��ϼ��� : ");
//	scanf("%s", input);
//	strcat(source, input);
//	printf("���� �� ���� ���� �Է��ϼ��� : ");
//	scanf("%s", input);
//	strcat(dest, input);
//
//	sfp = fopen(source, "rb");
//	if (sfp == NULL)
//	{
//		printf("���� ������ ���� �� �����ϴ�.\n");
//		return 1;
//	}
//
//	dfp = fopen(dest, "wb");
//	if (dfp == NULL)
//	{
//		printf("���� �� ������ ���� �� �����ϴ�.\n");
//		return 1;
//	}
//
//	fseek(sfp, 0, SEEK_END);
//	file_size = ftell(sfp);
//
//	printf("\nfilesize : %d\n", file_size);
//	printf("�ѹ��� ������ ����Ʈ �� : ");
//	scanf("%d", &n_byte);
//
//	while (1)
//	{
//
//		fseek(sfp, (1/4)* n_byte * n, SEEK_SET);
//		fread(&res, sizeof(res), (1 / 4) * n_byte, sfp);
//
//		fseek(dfp, (1 / 4) * n_byte * n, SEEK_SET);
//		fwrite(&res, sizeof(res), (1 / 4) * n_byte, dfp);
//		
//		double per = (double)(1 / 4.0)* n_byte* n;
//		printf("%d %d %d\n",n_byte, n,  per);
//
//		printf("������... %.2f\n", per/file_size);
//		if (n_byte * n > file_size) break;
//		n++;
//	}
//
//
//	fclose(sfp);
//	fclose(dfp);
//
//
//}