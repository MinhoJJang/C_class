#include <stdio.h> //표준 입출력헤더 
#pragma warning(disable:4996) //scanf()등 ANSI C함수 에러 메세지 무시

/*
자연수 n을 입력받아서 n줄만큼 다음과 같이 출력하는 프로그램을 작성하시오.

5

*
**
***
****
*****

*/

int main() {

	int n;
	int j;
	scanf("%d", &n);
	getchar();

	//증가방향
	for (int i = 0; i <n; i++) {
		for (int j = 0; j <= i; j++) {
			printf("*");		
		}
		printf("\n");
	}

	//감소방향
	for (int i = 0; i < n; i++) {
		for (int p = n-1; p >= i+1; p--) {
			printf("*");
		}
		printf("\n");
	}

	printf("\nENTER를 누르면 종료됩니다\n");
	getchar();
	return 0;
} //end main()