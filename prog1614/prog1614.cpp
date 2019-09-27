#include <stdio.h>

int main(void)
{
	int seireki;
	
	printf("êºóÔ=");
	scanf("%d", &seireki);
	
	if (seireki % 4 == 0) {
		if (seireki % 100 == 0) {
			if (seireki % 400 == 0) {
				printf("Ç±Ç∆ÇµÇÕÇ§ÇÈÇ§îNÇ≈Ç∑\n");
				return (0);
			}
			printf("Ç±Ç∆ÇµÇÕÇ§ÇÈÇ§îNÇ≈ÇÕÇ†ÇËÇ‹ÇπÇÒ\n");
			return (0);
		}
		printf("Ç±Ç∆ÇµÇÕÇ§ÇÈÇ§îNÇ≈Ç∑\n");
	}
	return (0);
}