#include <stdio.h> //표준 입출력헤더 
#pragma warning(disable:4996) //scanf()등 ANSI C함수 에러 메세지 무시

/*

*/

int main() {

	printf("산술 연산자 +, -, *, /, %\n");
	//% = 나머지 연산자 
	int result = 10 % 3;
	printf("result = %d\n", result);

	result = 4 * 2 + 6 / 2;
	printf("result = %d\n", result);
	
	result = 4 * (2 + 6) / 2;
	printf("result = %d\n", result);

	//===========================

	// 복합 대입 연산자
	// +=, -=, *=, /=, %= ..... 대부분의 이항연산자에 대한 복합대입연산자 가능
	int n = 10;
	n = n + 3; // '기존의 변수 값' 에 +3 증가 
	n += 3; // 위와 동일한 동작을 하는 복합대입연산자 
	printf("n = %d\n", n);

	n %= 5; // n = n % 5;
	printf("n = %d\n", n);

	n -= 32;
	printf("n = %d\n", n);

	//증감연산자 (단항연산자)
	// ++(1증가)	, --(1감소)

	n = 10;
	printf("n = %d\n", n);
	n = n + 1;
	printf("n = %d\n", n);
	n += 1;
	printf("n = %d\n", n);
	n++; 
	printf("n = %d\n", n);
	//다 똑같은 일을 함

	//===========================

	n--; //postfix방식
	printf("n = %d\n", n);
	--n; //prefix방식 
	printf("n = %d\n", n);

	// postfix 방식 : 기존연산 '직후' 에 증감연산 수행
    // prefix 방식 :  기존연산 '직전' 에 증감연산 수행

	int num1 = 5;
	int num2 = num1++ + 4; // = 9 
	//+를 수행 후 num1값이 증가함. 그래서 값이 5+4=9 나옴 
	printf("num1=%d, num2=%d\n", num1, num2);

	num1 = 5;
	num2 = ++num1 + 4; // = 10
	printf("num1=%d, num2=%d\n", num1, num2);
	// 가급적 증감연산자는 연산식 '안'에서 사용하는것은 피하자
	// 위 경우처럼 헷갈리니까..

	num1 = 5;
	num2 = num1 + 4;
	num1++;
	printf("num1=%d, num2=%d\n", num1, num2);

	//대입연산자도 연산결과값이 있다
	printf("num1 = %d\n", num1 = 2);

	int num3 = num2 = num1; 
	//num2 = num1가 먼저 수행, 이후 num3 = num2가 수행
	//대입연산자는 우측에서부터 수행
	printf("num3 = %d\n", num3);

	//===========================

	// 비교연산자(관계연산자)
	// 결과가 '참' 이면 1,  '거짓' 이면 0 (C언어 특징)
	// > , < , >=, <=, ==, != ...
	printf("\n비교연산자\n");
	printf("10>3 = %d\n", 10 > 3); // = 1
	printf("10<3 = %d\n", 10 < 3); // = 0
	printf("10>=3 = %d\n", 10 >= 3); // = 1
	// =>이런 연산자 없음.. 
	printf("10==3 = %d\n", 10 == 3); // = 0 
	// == 10과 3은 같습니까?  
	printf("10!=3 = %d\n", 10 != 3); // = 1 
    // != 10과 3은 다릅니까?
	
	//===========================

	// 논리연산자
	// &&, ||, !
	// && : and 연산자, 논리곱 연산, 피연산자 양쪽이 둘다 '참' 인 경우만 참
	// || : or 연산자,  논리합 연산 ,  피연산자 양쪽이 둘중 하나만 참이어도 참
	// or연산자 - 쉽게 생각해서 둘다 거짓이어야 거짓임
	// ! : not 연산자,  참->거짓, 거짓->참 

	/*

	T && T == >  T(1)
	T && F == >  F(0)
	F && T == >  F(0)
	F && F == >  F(0)

	T || T == >  T(1)
	T || F == >  T(1)
	F || T == >  T(1)
	F || F == >  F(0)

	!T == >  F(0)
	!F == >  T(1)

	*/

	printf("\n논리연산자\n");
	result = (10 > 4) && (45 < 90); // T && T = 1
	printf("result = %d\n", result); // 1

	result = (10 < 4) && (45 < 90); // F && T = 0
	printf("result = %d\n", result); // 0

	// C언어는 0 은 '거짓',  0 이외의 값은 '참' 으로 판정한다.
	// java, python 같은 boolean 타입 없음
	
	result = 10 - 10 || 100 + 1; // = 1
	printf("result = %d\n", result);

	result = 10 - (10 || 100) + 1; // = 10
	printf("result = %d\n", result);

	// ! : not 연산자 
	result = 54 % 2 == 0; // = 1
	printf("result = %d\n", result);

	result = !(54 % 2 == 0); // = 0
	printf("result = %d\n", result);

	printf("%d,%d,%d\n", 100 * 2, -1, 0);

	printf("%d,%d,%d\n", !(100 * 2), !(-1), !(0)); //0,0,1




	printf("\nENTER를 누르면 종료됩니다\n");
	getchar();
	return 0;
} //end main()