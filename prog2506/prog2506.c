#include <stdio.h>

int main(void)
{
	int region;
	
	printf("�����F1  �k����F2  �����F3  ����k�F4\n");
	printf("�ΐ�F5  ����  �F6  ����  �F7  �X����F8  ���c�F9\n");
	
	printf("���p���=");
	scanf("%d", &region);
	
	switch (region) {
	  case 1:
		printf("������%d�~�ł�\n", 200);
		break;
			
	  case 2:
		printf("������%d�~�ł�\n", 300);
		break;
			
		case 3:
			printf("������%d�~�ł�\n", 400);
			break;
			
		case 4:
			printf("������%d�~�ł�\n", 500);
			break;
			
		case 5:
			printf("������%d�~�ł�\n", 600);
			break;
			
		case 6:
			printf("������%d�~�ł�\n", 700);
			break;
			
		case 7:
			printf("������%d�~�ł�\n", 750);
			break;
			
		case 8:
			printf("������%d�~�ł�\n", 850);
			break;
			
		case 9:
			printf("������%d�~�ł�\n", 1000);
			break;
			
		default:
			printf("���p��Ԃ��Ԉ���Ă��܂�\n");
			break;
	}
	
	return (0);
}