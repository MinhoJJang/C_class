#include <stdio.h> // 표준입출력 printf, scanf ...

#pragma warning(disable:4996) // scanf() 등 전통 C함수 버그 문제

//남자는 'M' 여자는 'F'로 나타내기로 하고 18세 이상을 성인이라고 하자.
//
//
//성별('M', 'F')과 나이를 입력받아 "MAN"(성인남자), "WOMAN"(성인여자), "BOY"(미성년남자), "GIRL"(미성년여자)을 구분하여 출력하는 프로그램을 작성하시오.

int main()
{
	char sex;
	int age;

	scanf("%c", &sex);
	scanf("%d", &age);
	getchar();

	if (age >= 18)
	{
		if (sex == 'M') //연산자!!!!! 대입연산자-> = 
			printf("MAN");
		else if(sex == 'F')
			printf("WOMAN");
	}
	else  
	{
		if (sex == 'M')
			printf("BOY");
		else if (sex == 'F')
			printf("GIRL");
	}

	////다른방법.. &&(and) 사용
	//printf("--------------------------------\n");

	//if (sex == 'M' && age >= 18) printf("MAN");

	//if (sex == 'M' && age < 18) printf("BOY");

	//if (sex == 'F' && age >= 18) printf("WOMAN");

	//if (sex == 'F' && age >= 18) printf("GIRL");


	getchar();
	return 0;
} // end main()