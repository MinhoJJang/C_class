#include <stdio.h> //표준 입출력헤더 
#pragma warning(disable:4996) //scanf()등 ANSI C함수 에러 메세지 무시

/*

*/

int main() {

	int num1 = 10;
	int* p = NULL; //int 를 가리키는 포인터, 초기값을 null(아무 주소도 가리키지 않는 값, 0)

	int* *pp = NULL; //int* 를 가리키는 포인터 
	//??? pp를 *로 한번 참조하고 그 참조한곳을 다시 *로 참조함 

	p = &num1;
	pp = &p; //포인터 p의 주소를 담은 pp

	printf("%d %p %p\n", num1, p, pp);
	printf("%p %p\n", &p, pp);
	printf("%d %d %d\n", num1, *p, **pp);

	printf("\nENTER를 누르면 종료됩니다\n");
	getchar();
	return 0;
} //end main()