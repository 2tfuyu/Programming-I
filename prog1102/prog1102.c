#include <stdio.h>

int main(void)
{
	int i;
	
	printf("��������͂��Ă�������: ");
	scanf("%d", &i);
	
	if (i == 0) {
		printf("%d��0�ł�\n");
	}
	else {
		printf("%d��0�ł͂���܂���\n");
	}
	
	return (0);
}