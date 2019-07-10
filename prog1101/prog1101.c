#include <stdio.h>

int main(void)
{
	int height;
	int weight;
	float std_weight;
	float bmi;
	
	printf("身長(cm)=");
	scanf("%d", &height);
	
	printf("体重(kg)=");
	scanf("%d", &weight);
	
	std_weight = (float) height / 100 * (float) height / 100 * 22;
	bmi = weight / (((float) height / 100) * ((float) height / 100));
	
	printf("あなたの適正体重は%.1fです\n", std_weight);
	printf("あなたの肥満度(BMI)は%.1fです\n", bmi);
	
	return (0);
}