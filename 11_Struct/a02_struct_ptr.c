#include <stdio.h> //표준 입출력헤더 
#include <string.h>
#pragma warning(disable:4996) //scanf()등 ANSI C함수 에러 메세지 무시

// person 구조체 정의
struct person {
	char name[20]; //이름
	int age;				//나이
	double weight;	//몸무게
};

// typedef 로 정의된 타입명으로 사용 가능.
typedef struct person PS; 
//struct person을 PS로 부르겠다 라는 의미

typedef struct _person {
	char name[20]; 
	int age;				
	double weight;	
} Person; 
//위 구조체를 Person으로 부르겠다고 바로 정의 

char *fmt = "이름:%s, 나이:%d, 몸무게:%.1f\n";

//구조체를 매개변수로 받는 함수
void printPerson(Person p) { 
	// 호출시 구조체 복사 발생(32바이트 person을 복사..? 비추)
	printf(fmt, p.name, p.age, p.weight);
}

//구조체 매개변수는 구조체의 주소(포인터)로 받는게 좋음
void printPerson2(Person *p) { //*p는 포인터니까 4바이트 고정
	printf(fmt, p->name, p->age, p->weight);


}


int main() {

	PS p1;
	Person p2;
	Person p3 = { "로키", 100, 90.44 };

	//구조체의 size 
	printf("sizeof(Person) = %d\n", sizeof(Person));
	// 32 <--  일단 계산은 맞는다..

	//구조체에 대한 포인터
	Person *ptr = &p3; //포인터는 무조건 4byte

	printf(fmt, p3.name, p3.age, p3.weight);
	printf(fmt, (*ptr).name, (*ptr).age, (*ptr).weight);
	printf(fmt, ptr->name, ptr->age, ptr->weight);

	// 구조체 배열
	Person people[3];

	people[0].age = 10;
	people[0].weight = 3.4;
	strcpy(people[0].name, "헐크");

	people[1].age = 21;
	people[1].weight = 58.6;
	strcpy(people[1].name, "민호장");

	people[2].age = 26;
	people[2].weight = 45;
	strcpy(people[2].name, "ㅋㅋ");

	for (int i = 0; i < 3; i++) {
		printf(fmt, people[i].name, people[i].age, people[i].weight);
	}

	// people -> 배열 People[] type
	// people[i] -> People
	// people[i].age -> int type

	printf("\n");

	for (int i = 0; i < 3; i++) {
		printPerson(people[i]); // 호출시 매개변수 복사(32byte)
	}

	for (int i = 0; i < 3; i++) {
		printPerson2(people+i); // 호출시 매개변수 복사(4byte)
	}


	printf("\nENTER를 누르면 종료됩니다\n");
	getchar();
	return 0;
} //end main()