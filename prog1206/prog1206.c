#include <stdio.h>

int main(void)
{
	int year;
	
	printf("西暦=");
	scanf("%d", &year);
	
	if (year % 4 == 0) {
		printf("今年はオリンピックがあります\n");
	}
	else {
		printf("今年はオリンピックはありません\n");
	}
	return (0);
}