#include <stdio.h>

int main(void)
{
	int i;
	
	printf("®”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢: ");
	scanf("%d", &i);
	
	if (i == 0) {
		printf("%d‚Í0‚Å‚·\n", i);
	}
	else  if (i > 0) {
		printf("%d‚Í³‚Ì”‚Å‚·\n", i);
	}
	else {
		printf("%d‚Í•‰‚Ì”‚Å‚·\n", i);
	}
	
	return (0);
}