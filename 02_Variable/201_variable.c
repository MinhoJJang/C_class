#include <stdio.h>



int main() {

	printf("변수(variable)\n");

	int a = 100; 

	
	//a변수에 100값을 대입
	// = -> 대입연산자 
	//int 타입변수선언 
	int b;
	int c;
	int mike, jane; //여러개 선언 

	//printf("서식문자열");
	printf("제 나이는 23살 입니다\n");
	printf("제 나이는 %d살 입니다\n", 34);
	printf("제 나이는 %d살 입니다\n", 10+9);
	printf("%d 년은 제가 %d살이 되는 해입니다\n", 2021, 21);
	
	printf("제나이는 %d살입니다\n", a);
	printf("a x a = %d\n", a*a);

	a = 200; //덮어쓰기 
	printf("%d + %d = %d\n",a,a,a+a); //한줄주석 k+c / k+u
	//줄 선택 home + shift + 방향키 
	//printf("x = %d\n", x); //선언안된변수  변수는 선언한후부터 사용가능 

	
	//printf("mike = %d, jane = %d\n", mike, jane); // 초기화되지않은 변수 사용불가

	int hello_my_world2021; 
	//int a; //동일한 이름의 지역변수 중복선언 불가 
	// 
	int  aaaa, AAAA;
	int total_c;
	//int return;  

	getchar();
	return 0;
}