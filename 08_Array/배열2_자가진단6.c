#include <stdio.h> //표준 입출력헤더 
#pragma warning(disable:4996) //scanf()등 ANSI C함수 에러 메세지 무시

/*
5명 학생의 국어 영어 수학 과학 4과목의 점수를 입력 받아서 각 개인별로
평균이 80 이상이면“합격” 그렇지 않으면“불합격”을 출력하고 합격한 
사람의 수를 출력하는 프로그램을 작성하시오.

85 67 95 65
80 95 86 56
100 98 67 86
95 76 84 65
67 86 90 76
*/

int main() {

	int score[5][4]; //모든학생점수 받는 배열
	float onescore[5] = { 0 }; //한명의점수

	int i, j;
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 4; j++) {
			scanf("%d", &score[i][j]);
			onescore[i] += score[i][j];
		}
	}

	int successcount = 0;

	for (i = 0; i < 5; i++) {
		if (onescore[i] / 4 >= 80) {
		printf("pass\n");
		successcount++;
	}
		else {
			printf("fail\n");
		}
	}

	printf("Successful : %d", successcount);

	return 0;
} //end main()