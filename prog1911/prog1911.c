#include <stdio.h>

int main(void)
{
	int i;
	int ans;
	
	i = 1;
	ans = 0;
	
	while (i <= 10) {
		ans += i;
		i++;
	}
	printf("%d\n", ans);
	return (0);
}