#include <stdio.h> //표준 입출력헤더 
#pragma warning(disable:4996) //scanf()등 ANSI C함수 에러 메세지 무시

/*
10개의 원소를 저장할 수 있는 배열을 선언한 후 포인터 변수를 이용하여 자료를 입력받아 홀수의 개수와 짝수의 개수를 출력하는 프로그램을 작성하시오.

3 5 10 52 1 97 36 25 13 29

odd : 7
even : 3
*/

int main() {

	int number[10] = { 0 };
	int *p = number; //배열 = 포인터 
	int odd = 0;
	int even = 0;

	for (int i = 0; i < 10; i++) {
		//scanf("%d", &p[i]); //가능
		//p[i]는 주소'값' 이니까 주소값의 주소는  &를 붙여준다. 
		scanf("%d", p + i); //가능 
		getchar();
		//포인터 자체 p 가 '주소' 니까 &안붙이고 p만 붙이면 된다. 

		if (p[i] % 2 == 0) 
		//=if (*(p+i) % 2 == 0) 
		{
			//*(p+i)는 곧 (p+i)주소의 값을 의미함.
			//*(p+i) = p[i]
			even++;
		}
		else {
			odd++;
		}
	}

	printf("odd : %d\n", odd);
	printf("even : %d", even);

	printf("\nENTER를 누르면 종료됩니다\n");
	getchar();
	return 0;
} //end main()