#include <stdio.h> // 표준입출력 printf, scanf ...
#pragma warning(disable:4996) // scanf() 등 전통 C함수 버그 문제

/* “몸무게 + 100 - 키”를 비만수치 공식이라고 하자.


키와 몸무게를 자연수로 입력받아 첫 번째 줄에 비만수치를 출력하고, 비만수치가 0보다 크면 다음줄에 비만("Obesity")이라는 메시지를 출력하는 프로그램을 작성하시오. (출력형식은 아래 출력 예를 참고하세요.
*/

int main()
{
	int height; 
	int weight;

	//printf("키를 입력하세요\n");
	scanf("%d", &height);

	//printf("몸무게를 입력하세요\n");
	scanf("%d", &weight);
	getchar();

	int obesity = weight + 100 - height;

	printf("%d\n", obesity);
	if (obesity > 0)
		printf("Obesity");

	
	getchar();
	return 0;
} // end main()