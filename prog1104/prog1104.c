#include <stdio.h>

int main(void)
{
	int i;
	
	printf("��������͂��Ă�������: ");
	scanf("%d", &i);
	
	if (i % 2 == 0) {
		printf("%d�͋����ł�\n", i);
	}
	else {
		printf("%d�͊�ł�\n", i);
	}
	
	return (0);
}