#include <stdio.h>
#pragma warning(disable: 4996)

int main() {

	float height, weight; 
	printf("키를 입력하세요 (cm) : ");
	scanf("%f", &height); 
	//%f, 키보드로부터 실수 입력받아 float변수에 대입
	printf("체중를 입력하세요 (kg) : ");
	scanf("%f", &weight);

	printf("키: %.1fcm,  몸무게: %.1fkg\n", height, weight);

	double d1;
	printf("실수를 입력하세요 : ");
	scanf("%lf", &d1);
	printf("실수는 :%.12lf\n", d1);


	getchar();
	getchar();
	return 0;
}