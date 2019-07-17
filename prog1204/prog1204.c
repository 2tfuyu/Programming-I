#include <stdio.h>

int main(void)
{
	int a;
	
	printf("1‚©‚ç10‚Ü‚Å‚Ì®”‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
	scanf("%d", &a);
	
	if (a > 0 && a <= 10) {
		printf("³‰ð‚Å‚·\n");
	}
	else {
		printf("ŠÔˆá‚¢‚Å‚·\n");
	}
	
	return (0);
}