#include <stdio.h>

int main(void)
{
	int score;
	
	printf("�_��=");
	scanf("%d", &score);
	
	if (score >= 60) {
		printf("���i�ł�\n");
	}
	else {
		printf("�ԓ_�ł�\n");
	}
	
	return (0);
}