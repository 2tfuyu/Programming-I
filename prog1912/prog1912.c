#include <stdio.h>

int main(void)
{
	int i, x, ans;
	
	printf("x=");
	scanf("%d", &x);
	i = 1;
	ans = 0;
	
	while (i <= x) {
		ans += i;
		i++;
	}
	printf("1‚©‚ç%d‚Ü‚Å‚Ì‡Œv‚Í%d‚Å‚·\n", x, ans);
	
	return (0);
}