#include <stdio.h>

int main(void)
{
	int i;
	
	printf("®”=");
	scanf("%d", &i);
	
	if ((i % 2 == 0) && (i % 3 == 0)) {
		printf("6‚Ì”{”‚Å‚·\n");
	}
	else {
		printf("6‚Ì”{”‚Å‚Í‚ ‚è‚Ü‚¹‚ñ\n");
	}
	
	return (0);
}