#include <stdio.h>

int main(void)
{
	int height;
	int weight;
	float std_weight;
	float bmi;
	
	printf("�g��(cm)=");
	scanf("%d", &height);
	
	printf("�̏d(kg)=");
	scanf("%d", &weight);
	
	std_weight = (float) height / 100 * (float) height / 100 * 22;
	bmi = weight / (((float) height / 100) * ((float) height / 100));
	
	printf("���Ȃ��̓K���̏d��%.1f�ł�\n", std_weight);
	printf("���Ȃ��̔얞�x(BMI)��%.1f�ł�\n", bmi);
	
	return (0);
}