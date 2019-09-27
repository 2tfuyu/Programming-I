#include <stdio.h>

int main(void)
{
	int score;
	
	printf("“_”=");
	scanf("%d", &score);
	
	if (score >= 60) {
		printf("‡Ši‚Å‚·\n");
	}
	else {
		printf("Ô“_‚Å‚·\n");
	}
	
	return (0);
}