#include <stdio.h> //표준 입출력헤더 
#pragma warning(disable:4996) //scanf()등 ANSI C함수 에러 메세지 무시

/*

*/

int main() {

	printf("비트 연산자 bit operator\n");

	//& : AND 
	//| : OR
	//^ : XOR
	//~ : NOT
	//<<, >> : SHIFT 

	int num1 = 120, num2 = 26;
	int result;


	// AND 연산자 (&)
	// 둘 다 1이어야 1, 나머지는 0
	result = num1 & num2;
	printf("%d & %d = %d\n", num1, num2, result); // 24
	//why? 
	// 0111 1000 (120)
	// 0001 1010 (26)
	// ------------   &
	// 0001 1000 (24)
	// 둘다 1이어야 1임. 말그대로 and니까 둘다 1이어야함 


	// OR 연산자 (|)
	// 둘 다 0이어야 0, 나머지는 1 
	result = num1 | num2;
	printf("%d | %d = %d\n", num1, num2, result); // 122
	//why? 
	// 0111 1000 (120)
	// 0001 1010 (26)
	// ------------    |
	// 0111 1010 (122)


	// XOR 연산자 (^) (eXclusive OR : 배타적 논리합)
	// 같으면 0, 다르면 1
	result = num1 ^ num2;
	printf("%d ^ %d = %d\n", num1, num2, result); // 98
	//why? 
	// 0111 1000 (120)
	// 0001 1010 (26)
	// ------------   ^
	// 0110 0010 (98)

	// ~ : NOT 비트연산자 
	// 비트 반전 1-> 0
	result = ~num1;
	printf("~%d = %d\n", num1, result); //-121

	//~X = -(X+1)
	/*
	0000 0000 0000 0000 0000 0000 0111 1000 (120)
	──────────────────────────────────  ~
	(1)111 1111 1111 1111 1111 1111 1000 0111 (-121)
	맨 앞의 비트가 (1) 이면 음수임  
	*/

	// <<, >>  shift 연산자
	// bit 단위 이동
	num1 = 10;
	result = num1 << 2; //비트단위 왼쪽으로 2자리 이동
	printf("result = %d\n", result); //40

	// 0000 1010 (10)
	// << 2칸 SHIFT
	// 0010 1000 (40) = 10 * {2^2(칸)}

	// N칸 << SHIFT =  NUM * (2^N)

	num1 = 10;
	result = num1 >> 1; //비트단위 오른쪽으로 1자리 이동
	printf("result = %d\n", result); //5

	// 단순히 2의 승으로 곱하면 *연산보다 <<, >>연산 속도가 월등히 빠름.

	result = num1 * 2; // 시간 20초~30초 
	result = num1 << 1; //시간 1초 





	printf("\nENTER를 누르면 종료됩니다\n");
	getchar();
	return 0;
} //end main()