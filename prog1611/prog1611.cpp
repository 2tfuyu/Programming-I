#include <stdio.h>

int main(void)
{
	float a, b;
	
	printf("a��b�Ŋ���܂�\n");
	
	printf("a=");
	scanf("%f", &a);
	
	printf("b=");
	scanf("%f", &b);
	
	if (b == 0) {
		printf("0�Ŋ��邱�Ƃ͂ł��܂���\n");
		return (0);
	}
	
	printf("%.6f / %.6f = %.6f\n", a, b, a / b);
	
	return (0);
}