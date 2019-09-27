#include <stdio.h>

int main(void)
{
	int a;
	
	printf("a=");
	scanf("%d", &a);
	
	if ((0 < a) && (a <= 100)) {
		printf("a‚Í100ˆÈ‰º‚ÌŽ©‘R”‚Å‚·\n");
	}
	else {
		printf("a‚Í•‰‚Ü‚½‚Í100‚æ‚è‘å‚«‚¢”‚Å‚·");
	}
	return (0);
}