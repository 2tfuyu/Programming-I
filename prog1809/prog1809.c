#include <stdio.h>

int main(void)
{
	int i, total;
	double average;
	int n[10];
	int ans;
	
	total = 0;
	ans = 0;
	
	for (i = 0; i < 10; i++) {
		scanf("%d", &n[i]);
		total += n[i];
	}

	average = total / 10.0;
	
	for (i = 0; i < 10; i++) {
		if (average < n[i]) {
			ans++;
		}
	}
	printf("%d\n", ans);
	return (0);
}