#include <stdio.h>

int main(void)
{
	float n[2];
	float average;
	
	n[0] = 12.3;
	n[1] = 23.4;
	
	average = (n[0] + n[1]) / 2;
	printf("%.2f‚Æ%.2f‚Ì•½‹Ï‚Í%.1f‚Å‚·\n", n[0], n[1], average);
	
	return (0);
}