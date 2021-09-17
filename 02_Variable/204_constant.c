#include <stdio.h>

/*
*	상수 (Constant)
*	한번 값이 정해지면 변경할수 없는 데이터
*	(변수의 반대)
*
*	방법1 : const 키워드 사용
*	방법2 : #define 사용
*/

#define MAX_VALUE 100 

int main() {

	printf("상수(constant)\n");

	const int NUMBER = 10; 
	//	int 타입 상수 NUMBER 선언 및 초기화
	// 상수는 한번 값을 대입하면 변경 불가 
	//const n -> 상수 n 
	//상수는 보통 대문자사용
	//n = 200; 
	printf("NUMBER = %d\n", NUMBER);

	// ※VS rename : CTRL+R, CTRL+R
	// 변수명 바꿀때 좋음 

	printf("MAX_VALUE = %d\n", MAX_VALUE);
	//정해진값은 변경 불가능 

	int a;
	a = 100;
	//100 = a; //불가능함 
	// 코드상에 직접 입력하는 숫자, 문자는 literal 상수 


	getchar();
	return 0;
}