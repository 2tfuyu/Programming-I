#include <stdio.h>

int main(void)
{
	int height;
	int weight;
	float bmi;
	
	printf("身長(cm)=");
	scanf("%d", &height);
	
	printf("体重(kg)=");
	scanf("%d", &weight);
	
	bmi = weight / (((float) height / 100) * ((float) height / 100));
	
	if (bmi < 20){
		printf("あなたはやせすぎです\n");
	}
	else if (bmi >= 20 && bmi < 24) {
		printf("あなたは標準です\n");
	}
	else if (bmi >=24 && bmi < 26.5) {
		printf("あなたは太り気味です\n");
	}
	else {
		printf("あなたは太りすぎです\n");
	}
	
	return (0);
}