#include <stdio.h>

int main(void)
{
	int a;
	int b;
	
	printf("整数値1=");
	scanf("%d", &a);
	
	printf("整数値2=");
	scanf("%d", &b);
	
	if (a == b) {
		printf("2つの数は同じ値です\n");
	}
	else if (a < b) {
		printf("%dより%dの方がおおきい値です\n", a, b);
	}
	else {
		printf("%dより%dの方が大きい値です\n", b, a);
	}
	
	return (0);
}