#include <stdio.h>

int main(void)
{
	int a;
	int b;
	int result;
	
	printf("a=");
	scanf("%d", &a);
	
	printf("b=");
	scanf("%d", &b);
	
	result = a - b;
	
	if (result < 0) {
		result = -result;
	}
	
	printf("a‚Æb‚Ì·‚Ìâ‘Î’l‚Í%d‚Å‚·\n", result);
	
	return (0);
}