#include <stdio.h>

int main(void)
{
	int i;
	
	printf("���l(3��)=");
	scanf("%d", &i);
	
	printf("100�̈�=%d\n", i / 100);
	
	printf("10�̈�=%d\n", (i % 100) / 10);
	
	printf("1�̈�=%d\n", (i % 100) % 10);
	
	return (0);
}