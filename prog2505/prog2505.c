#include <stdio.h>

int main(void)
{
	int month;
	
	printf("��=");
	scanf("%d", &month);
	
	switch (month) {
		case 1:
			printf("�r���i�ނ��j\n");
			break;
			
		case 2:
			printf("�@���i�����炬�j\n");
			break;
			
		case 3:
			printf("�퐶�i��悢�j\n");
			break;
			
		case 4:
			printf("�K���i���Â��j\n");
			break;
			
		case 5:
			printf("�H���i�����j\n");
			break;
			
		case 6:
			printf("�������i�݂ȂÂ��j\n");
			break;
			
		case 7:
			printf("�����i�ӂ݂Â��j\n");
			break;
			
		case 8:
			printf("�t���i�͂Â��j\n");
			break;
			
		case 9:
			printf("�����i�Ȃ����j\n");
			break;
			
		case 10:
			printf("�_�����i����ȂÂ��j\n");
			break;
			
		case 11:
			printf("�����i�������j\n");
			break;
			
		case 12:
			printf("�t���i���킷�j\n");
			break;
			
		default:
			printf("�����Ԉ���Ă��܂�\n");
			break;
	}
	
	return (0);
}