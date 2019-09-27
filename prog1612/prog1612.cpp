#include <stdio.h>

int main(void)
{
	int i;
	
	printf("1‚©‚ç10‚Ü‚Å‚Ì®”‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
	
	scanf("%d", &i);
	
	if ((i >= 1) && (i <= 10)) {
		printf("³‰ð‚Å‚·\n");
	}
	else {
		printf("ŠÔˆá‚¢‚Å‚·\n");
	}
	return (0);
}