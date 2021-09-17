#include <stdio.h> // 표준입출력 printf, scanf ...
#pragma warning(disable:4996) // scanf() 등 전통 C함수 버그 문제

/*
*	제어문 (Control) : 프로그램의 흐름을 제어(변경)
*	1. 조건문(Conditional)
*	: if ~ else, switch ~ case
*
*	2. 순환문(loop)
*	: for, while, do ~ while
*/

int main()
{
	//		if(조건식) <-- 조건식이 '참'이면 (0이 아닌 모든 수)
	//      그 다음의 '한 문장' 혹은 '한 블럭' 을 실행시킨다
	//      거짓이면 실행하지 않고 넘어간다

	int n = 21;

	{
		if (n % 2 == 0)
		printf("짝수입니다\n");
	//else if(n % 2 != 0)
	//	printf("홀수입니다\n"); 
	}
	 
	// n 이 3의 배수이면 "3의 배수입니다" 라고 출력

	if (n % 3 == 0)
	{
		printf("%d 는", n);
		printf("3의 배수입니다\n");
	}

	printf("\nENTER 를 누르면 종료됩니다\n");
	getchar();
	return 0;
} // end main()