#include <stdio.h>

int main(void)
{
	int i;
	
	printf("”’l(3Œ…)=");
	scanf("%d", &i);
	
	printf("100‚ÌˆÊ=%d\n", i / 100);
	
	printf("10‚ÌˆÊ=%d\n", (i % 100) / 10);
	
	printf("1‚ÌˆÊ=%d\n", (i % 100) % 10);
	
	return (0);
}