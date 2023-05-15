#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <Windows.h>

/*

	 Q3. 파일 복사 프로그램 만들기
	 복사할 파일명과 복사 후 생성되는 파일 명을 입력받아서
	 파일의 내용을 복사하는 프로그램 작성.
	 단, txt 파일 뿐만 아니라 이미지 파일 등.. 모든 종류의 파일에
	 다 동일하게 적용할 수 있어야 한다.

	 복사 진행 과정을 백분율로 화면에 표시해주도록 하고
	 한번에 n 바이트씩 복사하도록 한다.

	 ex) 4 바이트
		원본파일 : source. txt
		대상파일 : dest.txt


*/

int main()
{
	char source[20] = "data/";
	char dest[20] = "data/";

	char input[20];

	FILE* sfp, * dfp;

	int n, m = 0, file_size = 0, res;
	printf("원본 파일 명을 입력하세요 : ");
	scanf("%s", input);
	strcat(source, input);
	printf("복사 후 파일 명을 입력하세요 : ");
	scanf("%s", input);
	strcat(dest, input);


	sfp = fopen(source, "r");
	dfp = fopen(dest, "w");

	if (sfp == NULL)
	{
		printf("원본 파일을 읽을 수 없습니다.\n");
		return 1;
	}
	if (dfp == NULL)
	{
		printf("복사 후 파일을 읽을 수 없습니다.\n");
		return 1;
	}

	fseek(sfp, 0, SEEK_END);
	file_size = ftell(sfp);

	printf("\nfilesize : %d\n", file_size);
	printf("한번에 복사할 바이트 수 : ");
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
		printf("복사중... %.2lf%%\n", per * 100);
		if (feof(sfp)) break;
		//Sleep(1000);
		//system("cls");

		m++;
	}

	printf("끝!");

	fclose(sfp);
	fclose(dfp);

}