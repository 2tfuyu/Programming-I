#include <stdio.h>

int main(void)
{
	int seireki;
	
	printf("����=");
	scanf("%d", &seireki);
	
	if (seireki % 4 == 0) {
		printf("���N�̓I�����s�b�N������܂�\n");
	}
	else {
		printf("���N�̓I�����s�b�N�͂���܂���\n");
	}
	
	return (0);
}