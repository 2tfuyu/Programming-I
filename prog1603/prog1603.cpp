#include <stdio.h>

int main(void)
{
	int inch;
	
	printf("���C���`�ł���=");
	scanf("%d", &inch);
	
	printf("%d�C���`��%.2fcm�ł�\n", inch, inch * 2.54);
	
	return (0);
}