#define _crt_secure_no_warnings

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int sum(int x, int y);

int main()
{	
	int x = 10, y = 20;
	int result = sum(x, y);

	printf("result=%d", result);

}

int sum(int x, int y)
{
	int result = x + y;

	return result;
}