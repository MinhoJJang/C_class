#include <stdio.h> //표준 입출력헤더 
#pragma warning(disable:4996) //scanf()등 ANSI C함수 에러 메세지 무시

/* 
//0602과제 
호석이네 학교는 6학년이 네 반이 있는데 각 반의 대표를 세 명씩 선발하여
제기차기 시합을 하였다.
반별로 세 명이 제기를 찬 개수를 입력받아 각 반별로 제기를 찬 개수의 
합계를 출력하는 프로그램을 작성하시오.
(반드시 배열을 이용하고 입력후에 출력하는 방식으로 하세요.)

1class? 15 2 35
2class? 33 1 6
3class? 5 10 19
4class? 1 8 55

1class : 52
2class : 40
3class : 34
4class : 64
*/

int main() {

	int score[4][3] = { 0 };
	int max[4] = { 0 };
	//char sixthclass [29]= "\0";

	for (int i = 0; i < 4; i++) {
		//scanf("%s", &sixthclass[i*7]);
		//문제가 진짜...저럴거면 입력이 왜저래..?
		for (int j = 0; j < 3; j++) {
			scanf("%d", &score[i][j]);
			max[i] += score[i][j];
		}
	}

	for (int i = 0; i < 4; i++) {
		printf("%dclass? ", i+1);
	}

	for (int i = 0; i < 4; i++) {
		printf("%dclass : %d\n", i + 1, max[i]);
	}
	getchar();
	return 0;
} //end main()