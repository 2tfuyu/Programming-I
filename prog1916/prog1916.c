#include <stdio.h>

int main(void)
{
	int i, j, ans, keta;
	int digit = 0;
	
	for (i = 1; i <= 9; i++) {
		for (j = 1; j <= 9; j++) {
			digit = 0;
			ans = i * j;
			keta = ans;
			while (keta != 0) {
				keta = keta / 10;
				digit++;
			}
			if (digit == 2) {
				printf("%d*%d=%d ", j, i, ans);
			}
			else {
				printf("%d*%d= %d ", j, i, ans);
			}
		}
		printf("\n");
	}
	
	/*
	‚±‚ê‚Å‚¢‚¢‚Á‚Ä‚æw
	
	int i;
	int j;
	
	for (i = 1; i <= 9; i++) {
		for (j = ; j <= 9; j++) {
			printf("%1d*%1d=%2d ", j, i, j * i);
		}
		printf("\n");
	}
	*/
	return (0);
}