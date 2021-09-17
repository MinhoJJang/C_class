#include <stdio.h> // 표준입출력 printf, scanf ...

#pragma warning(disable:4996) // scanf() 등 전통 C함수 버그 문제

#define GOOD 1
#define BAD 0

int main()
{
	if (10 < 4); // 주의!   조건문 뒤에 ; 을 바로 붙이는 실수 하지 말기!
	// 세미콜론을 붙이면 문장이 끝나버리므로 아래 구문이 if문과는 관계없이 실행됨 
	{
		printf("실행되면 안돼요\n");
	}

	int isGood = BAD;

	if (isGood == GOOD) // 대입연산자 = 와 비교연산자 == 를 헷갈리지 말기 
	{
		printf("착합니다\n");
	}
	else
	{
		printf("악당입니다\n");
	}


	printf("\n아무 키나 입력하면 프로그램 종료됩니다\n");
	getchar();
	return 0;
} // end main()

//jungo1
//선택제어문 꼭
//출력,입력,연산자 해보기 