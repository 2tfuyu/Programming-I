#include <stdio.h>

int main(void)
{
	int i, n, ans;
	int input;
	
	i = 0;
	ans = 0;
	
	printf("®”‚ğ‰½‰ñ“ü—Í‚µ‚Ü‚·‚©:");
	scanf("%d", &n);
	
	while (i < n) {
		printf("®”=");
		scanf("%d", &input);
		ans += input;
		printf("%d\n", input);
		i++;
	}
	printf("%d\n", ans);
	return (0);
}