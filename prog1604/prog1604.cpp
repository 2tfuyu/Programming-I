#include <stdio.h>

int main(void)
{
	float i[2];
	double ans;
		
	printf("”’l1=");
	scanf("%f", &i[0]);
	
	printf("”’l2=");
	scanf("%f", &i[1]);
	
	ans = (i[0] + i[1]) / 2;
	
	printf("%.1f‚Æ%.1f‚Ì•½‹Ï‚Í%.1f‚Å‚·\n", i[0], i[1], ans);
	
	return (0);
}