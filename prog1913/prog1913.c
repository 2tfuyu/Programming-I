#include <stdio.h>

int main(void)
{
	int i, ans;
	int x[10];
	
	for (i = 1; i <= 10; i++) {
		printf("”’l%d=", i);
		scanf("%d", &x[i - 1]);
	}
	
	ans = 0;
	for (i = 0; i < 10; i++) {
		ans += x[i];
	}
	printf("‡Œv=%d\n", ans);
	return (0);
}