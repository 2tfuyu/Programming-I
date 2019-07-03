#include <stdio.h>

int main(void)
{
	int a;
	
	printf("”’l‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢: ");
	scanf("%d", &a);
	// 123 => a=123
	// 123.4 => a=123
	// 123a => 123
	// abc => 35201536
	// a123 => 35660288
	
	printf("a=%d\n", a);
	
	return (0);
}