#include <stdio.h> // 표준입출력 printf, scanf ...

#pragma warning(disable:4996) // scanf() 등 전통 C함수 버그 문제


/*
*	if(조건식)
*		'참'일때 수행
*	else
*		'거짓'일때 수행
*
*
*	if(조건식1)
*		조건식1 이 '참' 일때 수행
*	else if (조건식2)
*		조건식2 가 '참' 일때 수행
*	else if (조건식3)
*		조건식3 가 '참' 일때 수행
*	..
*	else
*		위 조건식들 모두 거짓일때 수행
*/




int main()
{
	int n = 9;

	if (n % 2 == 0)
	{
		// n이 짝수
		printf("짝수입니다\n");
	}
	else
	{
		//n이 홀수
		printf("홀수입니다\n");
	}

	//--------------------------------------
	// if .. else if .. else if...

	double point = 0;
	printf("학점을 입력하세요\n");
	scanf_s("%lf", &point);

	getchar(); //왜필요하지?

	if (point >= 4.0) {
		printf("A학점\n");
	}
	else if (point >= 3.0) {
		printf("B학점\n");
	}
	else if (point >= 2.0) {
		printf("C학점\n");
	}
	else if (point >= 1.0) {
		printf("D학점\n");
	}
	else{
		printf("F입니다\n");
	}

	printf("\n아무 키나 입력하면 프로그램 종료됩니다\n");
	getchar();
	return 0;
} // end main()