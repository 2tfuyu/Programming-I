#include <stdio.h>

int main(void)
{
	int a;
	
	printf("���l(3��)=");
	scanf("%d", &a);
	
	printf("1�̈�%d\n",a%10);
	printf("10�̈�%d\n",(a/10)%10);
	printf("100�̈�%d\n",a/100);
	
	return (0);
}