#include <stdio.h>

int main(void)
{
	int second;
	int ans_min, ans_sec;
	
	printf("�b=");
	scanf("%d", &second);
	
	ans_min = second / 60;
	ans_sec = second - (ans_min * 60);
	
	printf("%d�b��%d��%d�b�ł�\n", second, ans_min, ans_sec);
	
	return (0);
}