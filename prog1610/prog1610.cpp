#include <stdio.h>

int main(void)
{
	int i;
	
	scanf("%d",&i);
	
	if (i % 3 == 0) {
		printf("%d‚Í3‚Ì”{”‚Å‚·B\n", i);
	}
	else {
		printf("%d‚Í3‚Ì”{”‚Å‚Í‚ ‚è‚Ü‚¹‚ñB\n", i);
	}
	
	return (0);
}