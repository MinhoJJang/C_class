#include <stdio.h>


int Year = 2021; // 전역변수 Year 

int main()  {

	//블럭-> {///}
	//global scope 를 갖는 변수 -> 전역변수 

	printf("Year = %d\n", Year);

	int grade = 4; 


	{
		int a = 100; //선언과동시에 초기화가능 & 지역변수 
		printf("a = %d\n", a);
		//선언된블럭에서만 사용가능한 지역변수  
		printf("grade = %d\n", grade);
		int Year = 1988;
	}

	int age = 32;
	{
		int age = 60; // 오류가안남? 
		printf("age = %d\n", age); //60
	}
	printf("age = %d\n", age); //32

	getchar();
	return 0;
}