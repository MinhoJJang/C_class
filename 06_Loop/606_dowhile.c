#include <stdio.h> //표준 입출력헤더 
#pragma warning(disable:4996) //scanf()등 ANSI C함수 에러 메세지 무시

/*
// do ~ while
// 일단 한번 수행하고 나서 조건식 검사





*/

int main() {

	int i = 1;
	while (i < 0) {
		printf("while수행중 \n");
	} //한번도 실행안됨

	i = 1;
	do {
		printf("do~while수행중 %d\n",i);
	} while (i < 0); //일단 실행하고 while이 참이면 계속하고 거짓이면 종료 
	
	printf("\nENTER를 누르면 종료됩니다\n");
	getchar();
	return 0;
} //end main()