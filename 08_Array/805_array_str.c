#include <stdio.h> //표준 입출력헤더 
#pragma warning(disable:4996) //scanf()등 ANSI C함수 에러 메세지 무시


/* 배열과 문자열(string)
*	 - C언어 에선 "문자열" 의 정체는 'char [] 배열' 이다
*	 - C언어의 "문자열"은
*		  끝이 '\0' (null 문자) 로 끝나는 'char [] 배열' 이다
*/


int main() {

	char str1[20] = "nice";
	printf("str1 = %s\n", str1); 
	// %s -> char배열에서 '\0' 만날때까지 출력
	printf("str1[0] = %c\n", str1[0]);
	printf("str1[1] = %c\n", str1[1]);
	printf("str1[2] = %c\n", str1[2]);
	printf("str1[3] = %c\n", str1[3]);
	printf("str1[4] = %c\n", str1[4]);

	char str2[] = { 'n','i','c','e' ,'\0'}; 
	//null문자 만날때까지 찍으니까 널문자를 만들어주자
	printf("str2 = %s\n", str2);

	char str3[] = "nice"; //쌍따옴표는 뒤에 널문자가 있는 배열임. 
	//즉 str3의 길이는 5임
	printf("str3's length is %d\n", sizeof(str3));

	char *str4 = "nice"; //pointer 

	str1[0] = 'D';
	printf("str1 = %s\n", str1); //중간에 글자 바꿀수도있음

	str2[4] = '#';
	printf("str2 = %s\n", str2);


	printf("\nENTER를 누르면 종료됩니다\n");
	getchar();
	return 0;
} //end main()