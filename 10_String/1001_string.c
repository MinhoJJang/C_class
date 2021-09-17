#include <stdio.h> //표준 입출력헤더 
#include <string.h>
#pragma warning(disable:4996) //scanf()등 ANSI C함수 에러 메세지 무시

/*
*	1. 문자열의 길이(문자의 개수)를 반환
*		strlen(문자열포인터);
*		strlen(문자배열);
*
*	2. 문자열 비교 결과를 반환
*		strcmp(문자열1, 문자열2);
*		int strcmp(char const *_Str1, char const *_Str2);
*
*		-1: ASCII 코드 기준으로 문자열2(s2)가 클 때
*		0: ASCII 코드 기준으로 두 문자열이 같을 때
*		1: ASCII 코드 기준으로 문자열1(s1)이 클 때
*
*	3. 문자열 복사
*		strcpy(대상문자열, 원본문자열);
*		char *strcpy(char *_Dest, char const *_Source);
*		대상문자열의 포인터를 반환
*
*	4. 문자열 붙이기
*		strcat(최종문자열, 붙일문자열);
*		char *strcat(char *_Destination, char const *_Source);
*		최종 문자열의 포인터를 반환
*
*	5. 문자열 안에서 '문자'로 검색
*		strchr(대상문자열, 검색할문자);
*		char *strchr(char * const _String, int const _Ch);
*		문자를 찾았으면 문자로 시작하는 문자열의 포인터를 반환, 문자가 없으면 NULL을 반환
*
*	6. 문자열 안에서 '문자열'로 검색
*		strstr(대상문자열, 검색할문자열);
*		char *strstr(char * const _String, char const * const _SubString);
*		문자열을 찾았으면 문자열로 시작하는 문자열의 포인터를 반환, 문자열이 없으면 NULL을 반환
*
*  7. 문자열 대소문자 변환
*		strupr(대상문자열)  : 주어진 대상문자열을 전부 대문자로 변환
*		strlwr(대상문자열)  : 주어진 대상문자열을 전부 소문자로 변환
*       원본문자열 변화됨 (주의!)
*/

/*문자열 = string

1. 문자열길이
string + length = strlen

2. 문자열 비교결과
string + compare = strcmp

3. 문자열 복사
string + copy = strcpy

4. 문자열 붙이기
string + concatenate(연결시키다) = strcat

5. 문자열 안에서 '문자' 검색
string + character = strchr

6. 문자열 안에서 '문자열' 로 검색
string + string = strstr

7. 문자열 대소문자 변환
string + upper / lower = strupr / strlwr
*/



int main() {

	char *s1 = "Hello"; 
	// s1포인터에는 "Hello" 문자열주소 저장
	char s2[10] = "Hello"; 
	// 길이 10인 char형 배열을 선언후 문자열 할당
	//실제로 문자열 끝에는 \0이 들어있다. 즉 버퍼 상, 위 문자열은 6자리임

	//문자열의 길이 strlen() 
	{
		printf("%d\n", strlen(s1)); //5
		printf("%d\n", strlen(s2)); //5 
	}

	//문자열 비교 strcmp()
	{
		int ret = strcmp(s1, s2); // 두 문자열 같으면 0리턴
		printf("%d\n", ret);

		if (strcmp(s1, s2)) {
			printf("%s와 %s는 다릅니다\n", s1, s2);
		}
		else {
			printf("%s와 %s는 같습니다\n", s1, s2);
		}

		// "aaa" => 97 97 97
		// "aab" => 97 97 98
		// A = 65
		// 1 0 -1

		printf("%d\n", strcmp("aaa", "aaa")); //0
		printf("%d\n", strcmp("aab", "aaa")); //1
		printf("%d\n", strcmp("aab", "aac")); //-1
		printf("%d\n", strcmp("aAaA", "AaAa")); //1

		printf("a = %d\nA = %d\n", 'a', 'A'); 
	}

	//문자열 복사 strcpy()
	{
		char s1[10] = "Hello";
		char s2[10];

		printf("strcpy() 전 s2 = %s\n", s2); //strange thing...

		strcpy(s2, s1); //s2에다 s1을 복사함
		//s1 = H e l l o \0 \0 \0 \0 \0
		// ------------------그대로
		//s1 = H e l l o \0   

		printf("strcpy() 후 s2 = %s\n", s2); //Hello

	}
	{
		//주의 
		char *s1 = "Hello";
		char *s2 = "";			
		//문자열 리터럴은 읽기 전용 데이터 영역(데이터 세그먼트)에 생성됨

		// strcpy(s2, s1); // 읽기전용 영역은 쓰기 불가 
		printf("%s\n", s2); 
	}

	//문자열 붙이기 strcat() string concatenation
	{
		char s1[10] = "world";
		char s2[20] = "Hello"; //붙일 문자열은 공간을 넉넉히
		printf("strcat() 전 s2 = %s\n", s2); //Hello

		strcat(s2, s1); //s2에 s1을 붙여라 
					//s1 = w o r l d \0 ...
		// ----------------------------------------그대로
		//s1 = H e l l o w o r l d \0   

		printf("strcat() 후 s2 = %s\n", s2); //Helloworld
	}

	//문자열 안에서 문자로 검색 strchr()
	{
		char s1[30] = "bargain, car, park";
		// = "A Garden Diary"

		
		char *ptr = strchr(s1, 'a'); //문자열 s1에서 문자 'a'검색. 찾은위치의 주소를 리턴
		printf("%d\n", strlen(s1));

		if (ptr) {
			printf("%d번째에서 찾았다\n", ptr - s1); //s1는 맨처음 A(0번째)를 가리킴. //3
		}
		else {
			printf("없다");
		}

		printf("ptr = %s\n", ptr); //arden Diary
		//a를 찾은 위치부터 문자열을 출력하니까.

		while (ptr != NULL) {
			printf("%d 번째에서 발견 %s\n", ptr - s1, ptr);
			ptr = strchr(ptr + 1, 'a'); //char타입 ptr 보다 1칸 뒤부터 찾는거
		}
	}

	// 문자열 안에서 '문자열' 로 검색 strstr()
	{
		char s1[30] = "A Garden Diary";

		char *ptr = strstr(s1, "den");

		if (ptr) {
			printf("strstr() 발견 %d번째, %s\n", ptr - s1, ptr);
		}
		else {
			printf("strstr() 발견 못함\n");
		}
	}

	//문자열 대소문자 변환 strupr(), strlwr() [upper, lower]
	{
		char s1[30] = "A Garden Diary";
		printf("strupr() => %s, s1 => %s\n", strupr(s1), s1);
		// 결국 str~는 포인터이므로 원본변화가 생김
		printf("strlwr() => %s, s1 => %s\n", strlwr(s1), s1);
	}



	printf("\nENTER를 누르면 종료됩니다\n");
	getchar();
	return 0;
} //end main()