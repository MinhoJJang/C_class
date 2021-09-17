#include <stdio.h> //표준 입출력헤더 
#pragma warning(disable:4996) //scanf()등 ANSI C함수 에러 메세지 무시

/** 포인터 연산
*
*	명심:
*	  포인터 -> 주소
*	  *포인터 -> 그 주소가 가리키는 값
*	포인터 타입 -> 그 주소가 가리키는 값의 타입
*
*	포인터변수에 +, - 연산을 하는 것은
*	결국 주소값을 증감 하는 것인데,
*	주소값이 얼마만큼 증감 하느냐는 '포인터 타입' 에 따라 다르다
*
*	ex) int* 포인터 인 경우 가리키는 값의 타입이  int (4byte) 이기 때문에
*		포인터 값에 + 1 연산을 할 경우 주소값이 4증가한다.
*
**/

//int 의 주소값은 항상 4의배수인가?? 


int main() {

	int n = 555;
	int *p = &n;

	printf("n = %d, p = %p, *p = %d\n", n, p, *p);

	//n,p  에 각각 +1연산
	printf("n+1 = %d, p+1 = %p, *(p+1) = %d\n", n+1, p+1, *(p+1));

	printf("\n");

	short s = 222;
	short *p2 = &s; //p2 의  short* 타입 short는 2byte

	printf("s = %d, p2 = %p\n", s, p2);
	printf("s + 1 = %d, p2 + 1 = %p\n", s + 1, p2+ 1); //	p2+2
	printf("s + 3 = %d, p2 + 3 = %p\n", s + 3, p2 + 3); //p2+6

	double d = 3.14;
	double *p3 = &d; // p3 is double type pointer 
	printf("d = %f, p3 = %p\n", d, p3);
	printf("d + 1 = %f, p3 + 1 = %p\n", d + 1, p3 + 1); //p3+8
	printf("d + 3 = %f, p3 + 3 = %p\n", d + 3, p3 + 3); //p3+24



	printf("\nENTER를 누르면 종료됩니다\n");
	getchar();
	return 0;
} //end main()