#include <stdio.h> //표준 입출력헤더 
#pragma warning(disable:4996) //scanf()등 ANSI C함수 에러 메세지 무시

/*
/*
* 조건식이 '참' 인 동안 while 블럭 반복
*
*	while(조건식){
*		..
*		..
*	}
*
*/



int main() {

	int i = 0;
	while (i < 5) {
		printf("i=%d\n", i);
		i++;
	}

	printf("------\n");

	// while문으로 구구단 2단 출력
	// 2 x 1 = 2
	// 2 x 2 = 4
	// ..
	// 2 x 9 = 18

	int k = 1;
	while (k < 10) {
		printf("2 x %d = %d\n", k, k * 2);
		k++;
	}





	printf("\nENTER를 누르면 종료됩니다\n");
	getchar();
	return 0;
} //end main()