#include <stdio.h>

int main(void)
{
	int n;
	int i, j;
	
	// i‚ª9‚É‚È‚é‚Ü‚Åj‚ð9‰ñ‰ñ‚·
	for (i = 1; i <= 9; i++) {
		for (j = 1; j <= 9; j++) {
			// 9‰ñŒ‹‰Ê‚ðo—Í
			printf(" %d * %d = %.2d", i, j, i * j);
		}
		// 9‰ñ‰ñ‚µI‚¦‚½‚ç‰üs
		printf("\n");
	}
	return (0);
}