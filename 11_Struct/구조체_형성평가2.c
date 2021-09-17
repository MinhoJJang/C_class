#include <stdio.h> //표준 입출력헤더 
#pragma warning(disable:4996) //scanf()등 ANSI C함수 에러 메세지 무시

typedef struct _person {
	char name[20];
	char tel[20];
	char addr[20];
} Person;

int main() {

	Person arr[3] = { 0 };

	for (int i = 0; i < 3; i++) {
		scanf("%s", arr[i].name);
		scanf("%s", arr[i].tel);
		scanf("%s", arr[i].addr);
	}

	Person *pFirst = arr;
	for (int i = 0; i < 3; i++) {
		if(strcmp(pFirst->name, arr[i].name) >0)
			pFirst = arr+i;
	}

	printf("name :%s\n", pFirst->name);
	printf("tel :%s\n", pFirst->tel);
	printf("addr :%s\n", pFirst->addr);
	getchar();

	printf("\nENTER를 누르면 종료됩니다\n");
	getchar();
	return 0;
} //end main()