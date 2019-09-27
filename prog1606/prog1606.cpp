#include <stdio.h>

int main(void)
{
	int i1, i2, i3;
	float ans;
	
	printf("”’l1=");
	scanf("%d", &i1);
	
	printf("”’l2=");
	scanf("%d", &i2);
	
	printf("”’l3=");
	scanf("%d", &i3);
	
	ans = (i1 + i2 + i3) / 3.0;
	
	printf("•½‹Ï=%.6f\n", ans);
	
	return (0);
}