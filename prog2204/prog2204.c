#include <stdio.h>

int main(void)
{
	int i;
	int sum;
	
	sum = 0;
	for (i = 1; i <= 10; i++) {
		sum += 1;
	}
	printf("1����10�܂ł̍��v��%d�ł�\n", sum);
	return (0);
}