#include <stdio.h> // 표준입출력 printf, scanf ...

#pragma warning(disable:4996) // scanf() 등 전통 C함수 버그 문제




int main()
{
	int  n = 0;
	scanf("%d", &n);
	getchar();

	switch (n) // switch(정수)
	{
	case 1: //n 값이 1인 경우 아래 코드 수행 
		printf("n 값은 1 입니다\n");
		break; //switch 코드수행 종료

	case 2: //case문은 여러개 가능.
		printf("n 값은 2 입니다\n");
		break;
	
	case 3: //case문은 여러개 가능.
		printf("n 값은 3 입니다\n");
		break;
	}
	
	
	// TODO :  n값이 짝수이면 "짝수입니다" 출력
	// 홀수이면 "홀수입니다 " 출력
	// switch ~ case 문 사용

	switch (n % 2)
	{
	case 0:
		printf("짝수입니다\n");
		break;

	case 1:
		printf("홀수입니다\n");
		break;
	}

	//float f = 3.14;
	//switch (f) // f와 같은 실수 올수없음 
	//{
	//	case..
	//}

	// 4점대 -> A
	// 3점대 -> B
	// 2점대 -> C
	// 1점대 -> D
	// 그 이하 -> F

	double point =6;

	switch ((int)point) //(int)실수 -> int 타입 변환, 3.4->3(소숫점 제거됨)
	
	{
		case 4: 
			printf("A 입니다\n");
			break; 

		case 3: 
			printf("B 입니다\n");
			break;

		case 2: 
			printf("C 입니다\n");
			break;

		case 1: 
			printf("D 입니다\n");
			break;

		case 0: 
			printf("F 입니다\n");
			break;
			
		default: //위 모든 case에 해당하지 않는 경우 
			printf("이번학기는 글렀군\n");
		}


	





	printf("\n아무 키나 입력하면 프로그램 종료됩니다\n");
	getchar();
	return 0;
} // end main()