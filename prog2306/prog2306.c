#include <stdio.h>

int main(void)
{
	int n, i;
	
	printf("’·‚³=");
	scanf("%d", &n); // ®”‚ğ“ü—Í‚³‚¹‚é
	
	// n‰ñ‰ñ‚·
	for (i = 1; i <= n; i++) {
		// i‚ª‹ô”‚È‚ç*AŠï”‚È‚ç+‚ğo—Í
		if (i % 2 == 0) {
			printf("*");
		}
		else {
			printf("+");
		}
	}
	return (0);
}