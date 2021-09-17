#include <stdio.h>
#pragma warning(disable: 4996)

int main() {

	char name[20]; //최대 20문자 담을 수 있는 문자열 name선언 

	printf("이름을 입력하세요 : ");
	scanf("%s", name); //문자열입력받을땐 &붙이지않음 
	printf("입력하신 이름은 %s\n입니다", name);
	printf("-----------------------------\n");

	int age;
	printf("나이를 입력하세요:");
	scanf("%d", &age);

	char nick[20];
	printf("별명을 입력하세요 :");
	scanf("%s", nick);

	printf("나이: %d, 별명: %s\n", age, nick);

	getchar();
	//한줄입력;
	//gets();
	printf("full-name을 입력하세요: ");
	gets(name); //띄어쓰기 포함한 한줄 입력 
	printf("이름은 %s 입니다\n", name);

	getchar();
	getchar();
	return 0;
}