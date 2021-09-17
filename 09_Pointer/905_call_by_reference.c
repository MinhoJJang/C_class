#include <stdio.h> //표준 입출력헤더 
#pragma warning(disable:4996) //scanf()등 ANSI C함수 에러 메세지 무시

/*
*  함수호출시 매개변수 전달 방식에 따라
*  1. Call By Value (값에 의한 호출)
*     : 기본적으로 매개변수 값의 '복사' 발생
*     : 호출한 원본은 변화 없다.
*  2. Call By Reference (참조에 의한 호출)
*     : 호출시 포인터(주소)를 함수에 넘겨준다
*	  : 기본적으로 매개변수(포인터, 주소) 값의 '복사' 발생
*     : 호출한 원본의 변화 발생
*/
void inc1(int n) { //Call By Value
	n += 1; //inc1 함수의 n
	printf("inc1() n = %d\n", n);
}

void inc2(int *p) { //Call By Reference //이렇게하면 참조할때 전체가 아닌 일부의 값만 참조하니까 성능적으로 좋음
	*p += 1; 
	printf("inc2() *p = %d\n", *p);
}

int main() {

	int n = 10; //main함수의 n
	
	inc1(n); // 함수호출 //11
	printf("inc1() 호출후 n = %d\n", n); //10 //호출한 쪽의 원본은 변화없다. 

	n = 20; // *p 가 무엇인지 알려줘야함.. *p를 매개변수로 하면 곧 주소가 매개변수라는 의미 
	//주소를 넣고, 주소값 += 1 한 뒤 리턴 
	inc2(&n); // int *p = &n 이랑 같은말임 //21
	printf("inc2() 호출후 n = %d\n", n); //21 //호출한쪽의 원본 변화 발생






	printf("\nENTER를 누르면 종료됩니다\n");
	getchar();
	return 0;
} //end main()