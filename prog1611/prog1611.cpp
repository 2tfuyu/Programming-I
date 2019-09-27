#include <stdio.h>

int main(void)
{
	float a, b;
	
	printf("a‚ðb‚ÅŠ„‚è‚Ü‚·\n");
	
	printf("a=");
	scanf("%f", &a);
	
	printf("b=");
	scanf("%f", &b);
	
	if (b == 0) {
		printf("0‚ÅŠ„‚é‚±‚Æ‚Í‚Å‚«‚Ü‚¹‚ñ\n");
		return (0);
	}
	
	printf("%.6f / %.6f = %.6f\n", a, b, a / b);
	
	return (0);
}