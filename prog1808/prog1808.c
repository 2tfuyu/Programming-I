#include <stdio.h>

int main(void)
{
	int i, max, min, total;
	double ans;
	int n[10];
	
	total = 0;
	
	for (i = 0; i < 10; i++) {
		scanf("%d", &n[i]);
		total += n[i];
	}
	
	max = n[0];
	min = n[0];
	
	for (i = 0; i < 10; i++) {
		if (max < n[i]) {
			max = n[i];
		}
		if (min > n[i]) {
			min = n[i];
		}
	}
	
	ans = total / 10.0;
	
	printf("�ő�=%d\n", max);
	printf("�ŏ�=%d\n", min);
	printf("����=%f\n", ans);
	return (0);
}