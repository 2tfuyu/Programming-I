#include <stdio.h>

int main(void)
{
	int i[5];
	int fix, index;
	
	printf("���l1=");
	scanf("%d", &i[0]);
		
	printf("���l2=");
	scanf("%d", &i[1]);
		
	printf("���l3=");
	scanf("%d", &i[2]);
		
	printf("���l4=");
	scanf("%d", &i[3]);
		
	printf("���l5=");
	scanf("%d", &i[4]);
	
	printf("�C�����鐔�l�ԍ��i0�Ȃ�I��)=");
	scanf("%d", &index);
	if (index == 0) {
		printf("���l�̓��͂��I���܂�\n");
		return (0);
	}
	printf("���l%d=", index);
	scanf("%d", &fix);
	i[index - 1] = fix;
	
	while (index != 0) {
		printf("���l1=%d\n", i[0]);
		printf("���l2=%d\n", i[1]);
		printf("���l3=%d\n", i[2]);
		printf("���l4=%d\n", i[3]);
		printf("���l5=%d\n", i[4]);
		
		printf("�C�����鐔�l�ԍ��i0�Ȃ�I��)=");
		scanf("%d", &index);
		
		if (index == 0) {
			printf("���l�̓��͂��I���܂�\n");
			return (0);
		}
		
		printf("���l%d=", index);
		scanf("%d", &fix);
		
		i[index - 1] = fix;
	}
	return (0);
}