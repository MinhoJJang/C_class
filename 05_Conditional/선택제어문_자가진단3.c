#include <stdio.h> // 표준입출력 printf, scanf ...
#pragma warning(disable:4996) // scanf() 등 전통 C함수 버그 문제

/* 나이를 입력받아 20살 이상이면 "adult"라고 출력하고 그렇지 않으면 몇 년후에 성인이 되는지를 "○ years later"라는 메시지를 출력하는 프로그램을 작성하시오.
*/

int main()
{
	int age = 0;
	scanf("%d", &age);
	getchar();

	if (age >= 20) {
		printf("adult");
	}
	else {
		printf("%d years later", 20-age);
	}

	getchar();
	return 0;
} // end main()