#include <stdio.h>

int main(void)
{
	int age;
	printf("�N��=");
	scanf("%d", &age);
	
	if (age >= 7 && age <= 12) {
		printf("���w���ł�\n");
	}
	else {
		printf("���w���ł͂���܂���\n");
	}
	return (0);
}