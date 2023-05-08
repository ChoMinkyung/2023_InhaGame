#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main()
{
	int arr[7] = { 1,2,3,4,5,6 };

	int* pS = &arr[0];
	int* pE = &arr[5];
	int count = sizeof(arr) / sizeof(int);
	for (int i = 0; i < count/2; i++)
	{
		int temp = *pS;
		*pS = *pE;
		*pE = temp;
		pS++;
		pE--;
	}

	for (int i = 0; i < count; i++)
	{
		if(arr[i]!=0) printf("%d ", arr[i]);
	}
}