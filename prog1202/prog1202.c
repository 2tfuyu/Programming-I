#include <stdio.h>

int main(void)
{
	int a;
	int b;
	int result;
	
	printf("a��b�Ŋ���܂�\n");
	
	printf("a=");
	scanf("%d", &a);
	
	printf("b=");
	scanf("%d", &b);
	
	if (b == 0) {
		printf("0�Ŋ��邱�Ƃ͂ł��܂���\n");
		return (0);
	}
	
	result = a / b;
	printf("%.6f / %.6f = %.6f\n", (float) a, (float) b, (float) result);
	return (0);
}