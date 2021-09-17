#include <stdio.h> //표준 입출력헤더 
#include <string.h> //문자열 관련 헤더
#pragma warning(disable:4996) //scanf()등 ANSI C함수 에러 메세지 무시
/*
	구조체 (struct)
		여러개의 데이터들 (멤버) 로 구성된 사용자 정의 자료형


	학생의 데이터
		-학번 : char[]
		-이름 : char[]
		-나이 : unsigned char  (0 ~ 255)
		-학년 : unsigned char
		-성별 : 'M', 'F'  char
		-키 : 173.4  float
		...
*/

// 구조체 point 정의
struct point { //type가 struct point 타입
	int x; //멤버변수 (member variable)
	int y; //멤버변수
};

// person 구조체 정의
struct person {
	char name[20]; //이름
	int age;				//나이
	double weight;	//몸무게
};

int main() {

	struct point p1; //point 구조체 타입의 변수 p1선언
	
	// 멤버연산자 ( . ) 사용하여 구조체 멤버 사용
	p1.x = 100;
	p1.y = 200;

	printf("p1 = (%d, %d) \n", p1.x, p1.y);

	struct person p2; //person 구조체 타입 변수 p2선언
	p2.age = 32;
	p2.weight = 54.7;
	strcpy(p2.name, "홍길동"); 
	//p2.name = "홍길동" 이런 식은 불가능함

	printf("이름: %s ,나이: %d, 몸무게 : %.1f\n", p2.name, p2.age, p2.weight);

	//구조체 변수 선언과 동시에 초기화
	struct person p3 = {"아이언맨", 48, 87.663 };
	printf("이름: %s ,나이: %d, 몸무게 : %.1f\n", p3.name, p3.age, p3.weight);

	// 구조체 멤버를 0으로 초기화하고싶으면 
	struct person p4 = { 0 };
	printf("이름: %s ,나이: %d, 몸무게 : %.1f\n", p4.name, p4.age, p4.weight);

	printf("\nENTER를 누르면 종료됩니다\n");
	getchar();
	return 0;
} //end main()