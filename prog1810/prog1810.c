#include <stdio.h>

int main(void)
{
	int i, j, m;

	m = 0;
	scanf("%d", &i);
	
	while (m < ((i - 1) - 2)) {
		if (i % (m + 2) == 0) {
			printf("%d‚Í‘f”‚Å‚Í‚È‚¢\n", i);
			return (0);
		}
		m++;
	}
	printf("%d‚Í‘f”\n", i);
	return (0);
}