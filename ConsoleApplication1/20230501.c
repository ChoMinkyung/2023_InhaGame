////charter 06-2 반복문 활용
//#define _crt_secure_no_warnings
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <stdbool.h>
//
//
//int main()
//{
//    int x;
//    printf("x를 입력하세요 : ");
//    scanf_s("%d", &x);
//    bool answer = true;
//    int x4=0, x3=0, x2=0, x1=0;
//    if ((x / 1000) > 0)
//    {
//        x4 = x / 1000;
//        printf("x4:%d ", x4);
//    }
//    if ((x / 100) > 0)
//    {
//        x3 = (x-x4*1000) / 100;
//        printf("x3:%d ", x3);
//    }
//    if ((x / 10) > 0)
//    {
//        x2 = (x-x4*1000-x3*100) / 10;
//        printf("x2:%d ", x2);
//    }
//    x1 = x % 10;
//    printf("x1:%d ", x1);
//    printf("\nx4:%d x3:%d x2:%d x1:%d\n", x4, x3, x2, x1);
//
//    if (x % (x4 + x3 + x2 + x1) == 0) answer = true;
//    else answer = false;
//    printf(answer? "true\n" : "false\n");
//}