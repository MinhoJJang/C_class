#include <stdio.h>

int main() {

	printf("기본출력(output)\n");
	//printf : print formatted (서식화된 출력)
	//"문자열" 출력

	//문자열(string) 선언
	//최대 20개의 문자를 담을 수 있는 문자열 str1 선언 
	char str1[20] = "C Language"; 
	//공백도 문자이므로 위 문자열은 10문자

	//%s : 문자열 출력하는 서식지정자 
	printf("str1 = %s\n", str1);

	char str2[] = "Java Language"; 
	//[]->자동적으로 초기화, 문자열의 문자개수만큼의 크기로 생성
	printf("str2 = %s\n", str2);

	char *str3 = "Python Language"; //포인터사용
	printf("str3 = %s\n", str3);

	//--------------------------------------------------
	// %d 서식지정자 

	int a = 10, b = 123, c = 4567;
	printf("|%d|%d|%d|\n", a, b, c);
	printf("|%5d|%5d|%5d|\n", a, b, c); 
	//5칸에 맞추어 출력 (기본 우측정렬) 
	printf("|%-5d|%-5d|%-5d|\n", a, b, c);
	//5칸에 맞추어 출력 (-붙이면 좌측정렬) 

	//-------------------------------------
	// escape 문자
	// 문자열 안에서 (" ~ "  안에서) 사용하는 특수한 기능을 하는 문자 
	//  \  (back slash) 로 시작함
	//
	//  \n   : 줄바꿈
	//  \t   : 탭
	//  \"   : 쌍따옴표
	//  \\   : \ 출력
	//  \0   :  널(null) 문자

	//tab_> 오른쪽이동 // shift tap  <- 왼쪽이동
   
	//하나의 탭은 문자 8자리 차지 

	//질문: 문자가 8자리 이상 차지하면 탭은 어떻게 되나?
	//답: 아래코드실행 

	printf("%d\t%d\t%d\n", 10, 20, 30);
	printf("%d\t%d\t%d\n", 1000, 2000, 3000);
	printf("%d\t%d\t%d\n", 100000000, 20000, 30000);


	//say "hi"
	printf("say\"hi\"\n");
	printf("\\\\는 \\를 출력하기 위한 esc문자입니다\n");

	getchar();
	return 0;
}