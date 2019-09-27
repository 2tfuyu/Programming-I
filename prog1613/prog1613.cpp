#include <stdio.h>

int main(void)
{
	int seireki;
	
	printf("西暦=");
	scanf("%d", &seireki);
	
	if (seireki % 4 == 0) {
		printf("今年はオリンピックがあります\n");
	}
	else {
		printf("今年はオリンピックはありません\n");
	}
	
	return (0);
}