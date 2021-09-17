#include <stdio.h> //표준 입출력헤더 
#pragma warning(disable:4996) //scanf()등 ANSI C함수 에러 메세지 무시

/*
중첩순환문(nested-loop)
*/

int main() {

	// 구구단 2단 ~ 9단
	// 2 x 1 = 2
	// ..
	// 2 x 9 = 18

	// 3 x 1 = 3
	// ..
	// 3 x 9 = 27
	// ...
	// 9 x 1 = 9
	// ..
	// 9 x 9 = 81

	int i = 0;
	int k = 0;

	for (i = 2; i < 10; i++)
	{
		printf("%d단\n", i);
		for (k = 1; k < 10; k++)
		{
			printf("%d x %d = %d\n", i, k, i*k);
		}
		printf("\n");
	}

	//위 구구단을 중첩 while문으로 만들기 
	//숙제
	//TODO

	printf("\nENTER를 누르면 종료됩니다\n");
	getchar();
	return 0;
} //end main()