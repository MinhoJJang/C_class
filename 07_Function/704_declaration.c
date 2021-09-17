#include <stdio.h> //표준 입출력헤더 
#pragma warning(disable:4996) //scanf()등 ANSI C함수 에러 메세지 무시
#include "myfunction.h" //함수선언, 상수, 매크로 등 

int main() {

	printf("MAX =%d\n", MAX);
	printf("MIN =%d\n", MIN);

	int i = 3, j = 4;
	printf("power() 결과 : %d\n", power(i, j)); //??왜이라노
	printf("doubleup() 결과 : %.1lf\n", doubleup(j)); 

	//TODO


	printf("\nENTER를 누르면 종료됩니다\n");
	getchar();
	return 0;
} //end main()