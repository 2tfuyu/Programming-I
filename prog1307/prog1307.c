#include <stdio.h>

int main(void)
{
	int year;
	printf("êºóÔ=");
	scanf("%d", &year);
	
	if ((year % 100 == 0) && (year % 400 == 0)) {
		printf("Ç±Ç∆ÇµÇÕÇ§ÇÈÇ§îNÇ≈Ç∑\n");
	}
	else {
		printf("Ç±Ç∆ÇµÇÕÇ§ÇÈÇ§îNÇ≈ÇÕÇ†ÇËÇ‹ÇπÇÒ\n");
	}
	return (0);
}