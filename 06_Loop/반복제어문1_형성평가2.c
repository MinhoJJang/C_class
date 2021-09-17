#include <stdio.h> //표준 입출력헤더 
#pragma warning(disable:4996) //scanf()등 ANSI C함수 에러 메세지 무시

/*
0 이상의 정수들이 공백으로 구분되어 반복적으로 주어진다.

0이 입력되면 반복문을 멈추고 그 전까지 입력받은 수들에 대하여

홀수의 개수와 짝수의 개수를 출력하는 프로그램을 작성하시오.

9 7 10 5 33 65 0

odd : 5
even : 1
*/

int main() {


	//무한루프 만드는법
	//for(;;) 
	//while(1) ->while(참) -> 무한루프
	int n;
	int odd = 0; //홀수
	int even = 0; //짝수 

	for ( ; ; ) {
		scanf("%d", &n);
		getchar();

		if (n == 0)
		{
			break;
		}
		else if (n % 2 == 0)
		{
			even++;
			continue;
		}
		else if (n % 2 == 1)
		{
			odd++;
			continue;
		}
	}
	printf("odd : %d\n", odd);
	printf("even : %d\n", even);



	printf("\nENTER를 누르면 종료됩니다\n");
	getchar();
	return 0;
} //end main()