#include <stdio.h>
#pragma warning(disable: 4996)

int main() {

	float height, weight; 
	printf("Ű�� �Է��ϼ��� (cm) : ");
	scanf("%f", &height); 
	//%f, Ű����κ��� �Ǽ� �Է¹޾� float������ ����
	printf("ü�߸� �Է��ϼ��� (kg) : ");
	scanf("%f", &weight);

	printf("Ű: %.1fcm,  ������: %.1fkg\n", height, weight);

	double d1;
	printf("�Ǽ��� �Է��ϼ��� : ");
	scanf("%lf", &d1);
	printf("�Ǽ��� :%.12lf\n", d1);


	getchar();
	getchar();
	return 0;
}