#define _crt_secure_no_warnings

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	/*int a = 10;
	double d = (double)a;
	printf("a: %d, d:%lf\n", a, d);

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
	printf("e>>2:%d\n", e >> 2);*/

	int g = 20, h = 10;
	if (g > 10) h = g;
	printf("g:%d, h:%d\n", g, h);

	int a = 0, b = 0;
	if (a > 0)
	{
		b = 1;
	}
	else if (a == 0)
	{
		b = 2;
	}
	else
	{
		b = 3;
	}
	printf("b:%d\n", b);

	int rank = 1, m = 0;

	switch(rank)
	{
		case 1:
			m = 300;
			break;
		case 2:
			m = 200;
			break;
		case 3:
			m = 100;
			break;
		default:
			m = 10;
			break;
	}
	printf("m:%d\n", m);

	int a1 = 1;
	while (a1 < 10)
	{
		printf("a:%d\n", a1);
		a1 *= 2;
	}
	for (int a1=1; a1 < 10; a1 *= 2)
	{
		printf("a:%d\n", a1);
	}

}