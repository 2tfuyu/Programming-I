#include <stdio.h>

int main(void)
{
	int height;
	int weight;
	float bmi;
	
	printf("�g��(cm)=");
	scanf("%d", &height);
	
	printf("�̏d(kg)=");
	scanf("%d", &weight);
	
	bmi = weight / (((float) height / 100) * ((float) height / 100));
	
	if (bmi < 20){
		printf("���Ȃ��͂₹�����ł�\n");
	}
	else if (bmi >= 20 && bmi < 24) {
		printf("���Ȃ��͕W���ł�\n");
	}
	else if (bmi >=24 && bmi < 26.5) {
		printf("���Ȃ��͑���C���ł�\n");
	}
	else {
		printf("���Ȃ��͑��肷���ł�\n");
	}
	
	return (0);
}