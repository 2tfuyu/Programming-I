#include <stdio.h>

int main(void)
{
	int i;
	
	printf("1から10までの整数を入力してください\n");
	
	scanf("%d", &i);
	
	if ((i >= 1) && (i <= 10)) {
		printf("正解です\n");
	}
	else {
		printf("間違いです\n");
	}
	return (0);
}