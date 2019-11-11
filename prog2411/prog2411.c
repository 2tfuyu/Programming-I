#include <stdio.h>

int main(void)
{
	int x, i;
	int ans = 0;
	printf("x=");
	scanf("%d", &x);
	
	for (i = 1; i <= x; i++) {
		ans += i;
	}
	printf("1‚©‚ç%d‚Ü‚Å‚Ì‡Œv‚Í%d‚Å‚·\n", x, ans);
	return (0);
}