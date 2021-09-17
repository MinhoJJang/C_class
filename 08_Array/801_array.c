#include <stdio.h> //표준 입출력헤더 
#pragma warning(disable:4996) //scanf()등 ANSI C함수 에러 메세지 무시

/*
/* 배열(array)
*	동일한 타입의 데이터(들)을 '하나의 배열이름' 으로 담아놓은 집합데이터
*
*	배열 변수 선언
*		타입 배열변수명[배열크기];
*		타입 배열변수명[] = { 초기화 값(들)..};
*
*  배열 첨자(index)를 사용하여 각각의 배열원소(element) 사용.
*       배열 첨자는 0 부터 시작!
*/


int main() {

	int kor1 = 88;
	int kor2 = 99;
	int kor3 = 77;
	//....너무많다
	// 동일한 타입과 내용의 데이터들을 위해 매번 다른 
	//이름의 변수를 선언하는것은 불가능함. 

	//5개의 int타입 데이터를 담는 배열 선언 
	int korArr[5]; //5개짜리 배열은 [0,1,2,3,4]5개가 있음
	
	korArr[0] = 100;
	korArr[1] = 90;
	korArr[2] = 88;
	korArr[3] = 43;
	korArr[4] = 76;

	printf("첫번째 학생 점수 : %d\n", korArr[0]);
	printf("두번째 학생 점수 : %d\n", korArr[1]);

	// 순환문 사용
	for (int i = 0; i < 5; i++) {
		printf("%d번째 학생의 점수 : %d\n", i+1, korArr[i]);
	}

	//5명 점수의 총점을 구하세요
	printf("----------------------------\n");

	int total = 0; //총점
	int i = 0;
	for (i=0; i < 5; i++) {
		total += korArr[i];
	}
	printf("총점은 %d\n", total);
	printf("평균은 %.2lf\n", (float)total / 5);



	printf("\nENTER를 누르면 종료됩니다\n");
	getchar();
	return 0;
} //end main()