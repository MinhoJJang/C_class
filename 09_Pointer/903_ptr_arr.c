#include <stdio.h> //표준 입출력헤더 
#pragma warning(disable:4996) //scanf()등 ANSI C함수 에러 메세지 무시

/** 포인터와 배열
*  배열의 이름은 포인터다!  포인터 '상수'다!
*	포인터 연산이 적용된다.
*
*	배열첨자 연산자 []  ← 결국 포인터 연산이다
*
*		arr[n] ↔ *(arr + n)   ★★★
*
**/

//배열을 매개변수로 받는 함수, 포인터로 선언, length 값도 매개변수에 같이 넘겨주어야함
// 배열이름은 곧 배열의 '주소' 다.  포인터와 같이(처럼) 동작한다
// 타입은?  int* 타입

int calcTotal(int *p, int length) {
	//int length = sizeof(p) / sizeof(int);
	//printf("length = %d\n", length); 
	//어차피 계산 안됨..p값이 입력 안되었으니..

	int sum = 0;
	for (int i = 0; i < length; i++) {
		sum += p[i];
	}
	return sum;
}

int main() {

	// 배열의 원소들은 연속된 메모리 공간에 생성됨 
	int arr[3] = { 10,20,30 };

	//arr은 주소, arr[i]는 주소값. 
	//arr = p , arr[i] = *p

	// 배열이름은 곧 배열의주소. 포인터와 같이 동작함
	// int * 타입
	printf("arr = %p\n", arr); //주소

	printf("*arr = %d\n", *(arr+2)); // = arr[2] = 30

	// 포인터 연산 (+,-)작동함
	printf("arr +0 = %p, *(arr+0) = %d\n", arr + 0, *(arr + 0));
	printf("arr +1 = %p, *(arr+1) = %d\n", arr + 1, *(arr + 1));
	printf("arr +2 = %p, *(arr+2) = %d\n", arr + 2, *(arr + 2));

	printf("\n");
	printf("arr[0] = %d, *(arr+0) = %d\n", arr[0], *(arr + 0));
	printf("arr[1] = %d, *(arr+1) = %d\n", arr[1], *(arr + 1));
	printf("arr[2] = %d, *(arr+2) = %d\n", arr[2], *(arr + 2));

	//*참조연산자 우선순위가 일반적인 산술연산자보다 높다
	// *(arr+1) != *arr+1

	printf("\n");
	printf("*(arr+1) = %d, *arr+1 = %d\n", *(arr + 1), *arr + 1);

	//다른 포인터 변수로 배열을 가리킬수도있음
	int *p = arr; // int *p2 = p; 이거랑 같은거임 
	printf("\n");
	printf("p[0] = %d\n", p[0]);
	printf("p[1] = %d\n", p[1]);
	printf("p[2] = %d\n", p[2]);

	//포인터변수와 배열의 차이점
	printf("sizeof(p) = %d\n", sizeof(p)); //4 
	printf("sizeof(arr) = %d\n", sizeof(arr)); //12

	int arr2[] = { 100,200,300 };
	p = arr2; //p는 변수 
	//arr = arr2; //불가능 
	//상식적으로 이미 정의한 아예 다른 배열 두개를 같다고 놓을수 있을까?

	printf("length = %d\n", sizeof(arr) / sizeof(int)); //3


	int total = calcTotal(arr, sizeof(arr) / sizeof(int)); 
	printf("총점은 =%d\n", total);
	//논리적.. arr 은 *p 이고, length은 sizeof(arr) / sizeof(int)이니..
	//포인터변수 *p 에 arr을 담고 arr[0]+arr[1]+arr[2] = 60 

	int total1 = calcTotal(p, sizeof(p) / sizeof(int)); //length = 1
	printf("총점은 =%d\n", total1); //100만 더하니까 100.

	printf("\nENTER를 누르면 종료됩니다\n");
	getchar();
	return 0;
} //end main()