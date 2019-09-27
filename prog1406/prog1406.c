#include <stdio.h>

int main(void)
{
	int i;
	
	printf("®”=");
	scanf("%d", &i);
	
	if (!(i % 5 == 0)) {
		printf("5‚ÅŠ„‚èØ‚ê‚Ü‚¹‚ñ\n");
	}
	else {
		printf("5‚ÅŠ„‚èØ‚ê‚Ü‚·\n");
	}
	
	return (0);
}