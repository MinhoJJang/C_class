#include <stdio.h> //표준 입출력헤더 
#pragma warning(disable:4996) //scanf()등 ANSI C함수 에러 메세지 무시

/**  포인터1 
*	메모리
*		연속된 1byte 단위들의 공간
*		1 byte 단위로 데이터를 저장된다.
*		각 byte 데이터는 고유한 주소값을 통해 접근 가능
*		ex) int 값은 4byte 이므로 '연속된' 1byte x 4개 공간에 저장된다.
*
*	주소
*		: Windows 환경에선 주소는 4byte.  (Mac 이나 Linux 에선 8byte);
*
*	주소연산자 : &
*		변수가 저장된 주소값을 리턴하는 연산자
*		int 같이 여러byte 에 걸쳐 저장된 데이터의 경우 첫번째 byte 의 주소값

*	참조연산자 *
*       포인터를 사용해서, 담고 있는 주소에 찾아가 그 주소 안의 '값'을 참조. (읽기, 쓰기)
*/

int main() {

	printf("주소 연산자 & \n");

	int n = 100;

	// 주소값 출력시는 %p 
	// 변수명 앞에 & 사용하면 변수의 주소값 반환
	// %p 로 출력시 16진수 8자리로 표현 (32bit, 4byte) ※ 16진수 2자리를 1byte 분량에 해당
	
	printf("n=%d, n의 주소는 %p\n", n, &n);

	//포인터변수- 주소를 담는 변수 
	int *p; //int 타입 포인터 변수 p 선언 
				//p는 int type data를 가리키는 주소를 담는다. 

	p = &n; //int 변수 n의 주소를 포인터 p에 대입
	printf("p = %p, &n = %p\n", p, &n);

	//참조연산자 *
	// 포인터에 사용되어, 포인터가 가리키는 주소를 찾아가 그 주소한의 값을 참조한다. (읽기, 쓰기 가능)
	printf("*p = %d\n", *p);

	int *p2;	//int type pointer p2. 4byte
	p2 = p; //p=&n adress of 'n'. now, p2 is pointing 'n'
	printf("p2 = %p, *p2 = %d\n", p2, *p2);
	//p2 only show its adress number, *p2 is showing something inside. (n = 100)

	//참조연산자를 사용하여 참조하는 값 변경가능 
	*p = 500; //p가 가리키는 주소의 값을 500으로 변경 
	printf("p2 = %p, *p2 = %d\n", p2, *p2);

	// 주의!
	// 포인터에 직접 숫자값대입 (위험)

	//p = 100; //p에 100번지 주소값을 대입했다는 소리
	//printf("*p = %d\n", *p); //접근하면 안되는 메모리 영역을 포인터로 접근하려 하면 에러. 프로그램이 죽음

	printf("\nENTER를 누르면 종료됩니다\n");
	getchar();
	return 0;
} //end main()