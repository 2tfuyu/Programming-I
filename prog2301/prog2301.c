#include <stdio.h>

int main(void)
{
	int n, i;
	scanf("%d", &n); // ”š‚ğ“ü—Í‚³‚¹‚é
	
	// 1‚©‚çn‚Ü‚Å‚Ì”š‚ğo—Í‚·‚é
	for (i = 1; i <= n; i += 2) {
		printf("%d\n", i);
	}
	return (0);
}