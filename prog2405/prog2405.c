#include <stdio.h>

int main(void)
{
	float x, y;
	printf("x=");
	scanf("%f", &x);
	printf("y=");
	scanf("%f", &y);
	
	printf("x+y=%.6f\n", x + y);
	return (0);
}