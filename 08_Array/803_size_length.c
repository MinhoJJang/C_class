#include <stdio.h> //표준 입출력헤더 
#pragma warning(disable:4996) //scanf()등 ANSI C함수 에러 메세지 무시


/*
*	배열의 크기 (size) : 배열의 용량크기 (byte)
*	배열의 길이 (length) : 배열원소의 개수
*/

int main() {

	//sizeof()연산자 
	//데이터의 크기를 byte(정수)로 리턴
	printf("%d\n", sizeof(100)); //정수 리터럴의 크기, 
	//100은 int타입이니까 4byte
	short s = 100;
	printf("%d\n", sizeof(s)); //변수의 크기 2byte
	printf("%d\n", sizeof(double)); //8

	int arr[3];
	printf("sizeof(배열) : %d\n", sizeof(arr)); //4byte 3개->12
	printf("arr[0]의 size : %d\n", sizeof(arr[0]));

	// 배열의 길이 구하는 공식
	// sizeof(배열이름) / sizeof(배열원소타입)
	// sizeof(배열이름) / sizeof(배열의 첫번째 원소)

	printf("arr의 length = %d\n", sizeof(arr) / sizeof(int));

	// int arr2[0]; 불가능함. C언어는 길이 0자리 배열 선언 불가 

	printf("\nENTER를 누르면 종료됩니다\n");
	getchar();
	return 0;
} //end main()