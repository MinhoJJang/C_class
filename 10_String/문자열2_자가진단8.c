#include <stdio.h> //표준 입출력헤더 
#pragma warning(disable:4996) //scanf()등 ANSI C함수 에러 메세지 무시

/*
1. 맨처음 글자 비교
2. 글자가 같다면 글자수 비교
3. 글자수도 같다면 두번째 문자 비교 
4. 두번째문자도 같으면 세번째문자 비교
5. 계속...
*/

int main() {

	/*char word1[10];
	char word2[10];
	char word3[10];

	scanf("%s", word1);
	scanf("%s", word2);
	scanf("%s", word3);*/

	char szInput[100]; // string with zero. \0으로 끝나는문자열이라는 뜻
	char szFirst[100];

	for (int i = 0; i < 3; i++) {
		scanf("%s", szInput);

		if (i == 0 || 
			(i > 0 && (strcmp(szFirst, szInput) > 0))) { 
			//이전 First 보다 앞선 단어라면..
			strcpy(szFirst, szInput);
		}
	}
	printf("%s\n", szFirst); 

	printf("\nENTER를 누르면 종료됩니다\n");
	getchar();
	return 0;
} //end main()