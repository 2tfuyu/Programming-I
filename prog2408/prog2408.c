#include <stdio.h>

int main(void)
{
	int age;
	printf("”N—î=");
	scanf("%d", &age);
	
	if (age >= 7 && age <= 12) {
		printf("¬Šw¶‚Å‚·\n");
	}
	else {
		printf("¬Šw¶‚Å‚Í‚ ‚è‚Ü‚¹‚ñ\n");
	}
	return (0);
}