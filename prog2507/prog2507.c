#include <stdio.h>

int main(void)
{
	int x, y;
	
	printf("���l1=");
	scanf("%d", &x);
	
	printf("���l2=");
	scanf("%d", &y);
	
	switch ((x % 2 == 0) && (y % 2 == 0)) {
	  case 1:
		printf("���������ł�\n");
		break;
	  case 0:
		printf("�Е������ł�\n");
		break;
	}
	return (0);
}