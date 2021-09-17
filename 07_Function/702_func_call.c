#include <stdio.h> //표준 입출력헤더 
#pragma warning(disable:4996) //scanf()등 ANSI C함수 에러 메세지 무시

/*

*/

void bbb() {
	printf("5. bbb()함수 시작\n");
	printf("6. bbb()함수 리턴\n");
}

void aaa() {
	printf("3. aaa()함수 시작\n");

	bbb(); //bbb()호출

	printf("4. aaa()함수 리턴\n");

	//aaa();
}


int main() {

	printf("1. main() 함수 시작\n");
	aaa();
	printf("2. main() 함수 리턴\n 엔터눌러\n");
	getchar();
	return 0;
} //end main()