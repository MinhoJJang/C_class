#include <stdio.h>


	//문자
	//char 1
	//
	//정수
	//short 2
	//int  4  -> 2의 32승 .. -21억~+21억 표현 
	//long 4
	//
	//실수 
	//float 4
	//double 8byte
	//
	//1byte = 8bit 



int main() {

	printf("데이터타입\n");

	//정수타입변수 
	int i = 0;
	int a = 100, b = 200, c = 300;

	short s1, s2, s3 ,s4 = 400;
	long l1, l2 = 10000000, l3; 

	char ch1; // 1byte = 8bit = 256개의 문자 표현가능 \

	ch1 = 'a'; // 'a'는 a의 코드값(정수)를 대입 -> 아스키코드 
					// CHAR문자하나  -->홀따옴표 사용 

	printf("ch1의 값은 = %d\n", ch1); // a는 97
	printf("ch1의 값은 = %c\n", ch1); // %c 서식지정자는 문자하나로 출력 

	printf("ch1의 값은 = %d\n", ch1+1);
	printf("ch1의 값은 = %c\n", ch1+1); // a다음은 b니까 a+1 = b

	ch1 = 'A';
	printf("ch1의 값은 = %d\n", ch1); //대문자  A의 코드값은 65,
	printf("ch1의 값은 = %c\n", ch1);

	//printf 서식지정자들 
	//%%=>%출력 
	printf("%d, %x, %c\n", 65, 65, 65);


	char ch2 = 200; 
	printf("ch2 = %d\n", ch2); 

	//정수타입의 변수는 오버플로우, 언더플로우 발생 
	// 0~127, -128 -127, .... -1, 0, 1, 2, .... 127, -128, ...

	{
		//signed(부호있는), vs unsigned(부호없는)
		signed char ch1 = 200; //  = char ch1과 동일 , signed는 생략함 +1,+2같은 느낌
		unsigned char ch2 = 200; // 부호가없으므로 0~+255까지 표현  

		printf("ch1=%d, ch2=%d\n",ch1, ch2);

	}
	

	{
		//실수타입 

		float f1 = 3.141592; // 4byte
		double d1 = 3.141592; //8byte 

		printf("f1 = %.2f\n", f1); //소수점 두자리 출력, 이하반올림
		printf("d1 = %.4lf\n", d1);

		//실수타입에서의 용량의 차이 
		//정밀도(precision)의 차이가있음
		//float = 소숫점 6-9자리
		//double = 소숫점 15-18자리 

		float f2 = 0.0123456789;
		double d2 = 0.123456789;

		//%f로 출력하면 소수점 아래 6자리까지 출력 
		printf("f2 = %f, d2 = %f\n", f2, d2);

		printf("f2 = %.10f, d2 = %.10f\n", f2, d2);

	}

	getchar();
	return 0;
}
