#include <stdio.h> //표준 입출력헤더 
#pragma warning(disable:4996) //scanf()등 ANSI C함수 에러 메세지 무시

/*

*/

int main() {

	// 삼항 연산자
	// ( 조건식 ) ? (참인경우 결과) : (거짓인 경우 결과)

	int result;

	result = (10 > 3) ? 200 : -100;
	printf("result = %d\n", result);

	result = (10 < 3) ? 200 : -100;
	printf("result = %d\n", result);

	int a = 45;
	int b = 60;
	// a와 b의 차이값은?
	int diff = (a > b) ? (a - b) : (b - a);
	printf("diff = %d\n", diff);


	printf("\nENTER를 누르면 종료됩니다\n");
	getchar();
	return 0;
} //end main()