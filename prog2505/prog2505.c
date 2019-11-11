#include <stdio.h>

int main(void)
{
	int month;
	
	printf("月=");
	scanf("%d", &month);
	
	switch (month) {
		case 1:
			printf("睦月（むつき）\n");
			break;
			
		case 2:
			printf("如月（きさらぎ）\n");
			break;
			
		case 3:
			printf("弥生（やよい）\n");
			break;
			
		case 4:
			printf("卯月（うづき）\n");
			break;
			
		case 5:
			printf("皐月（さつき）\n");
			break;
			
		case 6:
			printf("水無月（みなづき）\n");
			break;
			
		case 7:
			printf("文月（ふみづき）\n");
			break;
			
		case 8:
			printf("葉月（はづき）\n");
			break;
			
		case 9:
			printf("長月（ながつき）\n");
			break;
			
		case 10:
			printf("神無月（かんなづき）\n");
			break;
			
		case 11:
			printf("霜月（しもつき）\n");
			break;
			
		case 12:
			printf("師走（しわす）\n");
			break;
			
		default:
			printf("月が間違っています\n");
			break;
	}
	
	return (0);
}