#include <stdio.h>
#pragma warning(disable: 4996)

int main() {

	//char 를 입력받을 때 주의
	char ch;
	int a, b;

	printf("문자 하나 입력 : ");
	scanf("%c", &ch);
	printf("입력한 문자는 : %c \n", ch);

	printf("정수 하나 입력 : ");
	scanf("%d", &a);

	printf("또 문자 하나 입력 : ");
	
	/**중요**/
	getchar(); 
	/*******/
	//getchar은 버퍼에 남아있는 줄바꿈문자 제거함 

	scanf("%c", &ch);
	//%c는 무조건 버퍼의 문자 하나를 빼감(cmd 창에서 우리가 누르는 엔터까지 포함)
	//버퍼에 줄바꿈등의 공백문자가 남아있다면 미리 제거해야함 

	//숫자 입력 후 %c 입력하려면 버퍼 앞의 공백 꼭 제거
	
	printf("a = %d, ch = %c \n", a, ch);


	getchar();

	printf("ENTER를 누르면 프로그램이 종료됩니다\n");
	getchar();
	return 0;
}