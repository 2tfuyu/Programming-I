#include <stdio.h>

int main(void)
{
	int year;
	
	printf("����=");
	scanf("%d", &year);
	
	if (year % 4 == 0) {
		printf("���N�̓I�����s�b�N������܂�\n");
	}
	else {
		printf("���N�̓I�����s�b�N�͂���܂���\n");
	}
	return (0);
}