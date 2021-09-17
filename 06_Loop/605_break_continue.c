#include <stdio.h> //표준 입출력헤더 
#pragma warning(disable:4996) //scanf()등 ANSI C함수 에러 메세지 무시

/*
// break, continue

// 순환문 안에서 break를 만나면, 자기를 감싸는 가장 가까운 순환문 종료.
// 순환문 안에서 continue를 만나면, 자기를 감싸는 가장 가까운 순환문 으로 돌아감




*/

int main() {

	int count=0;
	for (int i = 1; ; i++) {
		
		if (i % 7 == 0) {
			break; // 조건 만족시 즉시 함수종료 
		}
		else if (i % 7 != 0) {
			count++;
		}
		printf("i=%d\n", i);
	}
printf("%d\n", count);

	int i = 0;
	while (i <= 10) {
		i++;
		
		if (i % 2 == 0) {
			continue; //밑에 실행하지 않고 바로 while로 돌아감
		}

		printf("i=%d\n", i);
	}

		


	printf("\nENTER를 누르면 종료됩니다\n");
	getchar();
	return 0;
} //end main()