#include <stdio.h>

int main(void)
{
	int n, i;
	scanf("%d", &n); // ”š‚ğ“ü—Í‚³‚¹‚é
	
	i = 1;
	// 1‚©‚çn‚Ü‚Å‚ğo—Í‚·‚é
	while (i <= n) {
		printf("%d\n", i);
		i += 2;
	}
	return (0);
}