#include <stdio.h>

int main(void)
{
	float pi;
	float r;
	float s;
	
	pi = 3.1416;
	r = 10.0;
	s = r * r * pi;
	
	printf("���a%.0f�̉~�̖ʐς�%.0f�ł��B\n", r, s);

	return (0);
}