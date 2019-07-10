#include <stdio.h>

int main(void)
{
	int i;
	
	printf("®”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢: ");
	scanf("%d", &i);
	
	if (i % 2 == 0) {
		printf("%d‚Í‹ô”‚Å‚·\n", i);
	}
	else {
		printf("%d‚ÍŠï”‚Å‚·\n", i);
	}
	
	return (0);
}