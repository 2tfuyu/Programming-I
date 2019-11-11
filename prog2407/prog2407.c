#include <stdio.h>

int main(void)
{
	int x, y;
	int ans;
	printf("®”1=");
	scanf("%d", &x);
	printf("®”2=");
	scanf("%d", &y);
	
	if (x > y) {
		ans = x - y;
	}
	else {
		ans = y - x;
	}
	printf("·‚Ìâ‘Î’l‚Í%d‚Å‚·\n", ans);
	return (0);
}