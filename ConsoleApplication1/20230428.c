#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	/*int a = 10;
	double d = (double)a;
	printf("a: %d, d:%lf\n", a, d);*/

	int a = 10, b = 20;
	int res = 2;
	 
	a += 20;
	res *= b + 10;

	printf("a=%d, b=%d\n", a, b);
	printf("res=%d\n", res);

	int c = 50, d = 100;
	
	res = (c > d ? c : d);
	printf("Å« °ª : %d\n", res);

	int e = 10, f = 12;
	printf("e&f:%d\n", e & f);
	printf("e^f:%d\n", e ^ f);
	printf("e|f:%d\n", e | f);
	printf("~e:%d\n", ~ e);
	printf("e<<1:%d\n", e << 1);
	printf("e>>2:%d\n", e >> 2);

}