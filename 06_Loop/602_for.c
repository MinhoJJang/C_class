#include <stdio.h> //표준 입출력헤더 
#pragma warning(disable:4996) //scanf()등 ANSI C함수 에러 메세지 무시

/*

*/

int main() {

	// 구구단 2단 출력
	// 2 x 1 = 2
	// 2 x 2 = 4
	// ..
	// 2 x 9 = 18

	int i;
	for (i = 1; i < 10; i++)
	{
		printf("2 x %d = %d\n", i,i * 2);
	}

	//1~n까지 합 구하기 

	{
		int n = 100;
		int sum = 0;
		for (int i = 0; i <= n; i++)
		{
			sum += i;
		}
		printf("sum = %d\n", sum);
	}


	printf("\nENTER를 누르면 종료됩니다\n");
	getchar();
	return 0;
} //end main()