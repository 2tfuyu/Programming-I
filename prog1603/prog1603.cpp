#include <stdio.h>

int main(void)
{
	int inch;
	
	printf("何インチですか=");
	scanf("%d", &inch);
	
	printf("%dインチは%.2fcmです\n", inch, inch * 2.54);
	
	return (0);
}