#include <stdio.h> //표준 입출력헤더 
#pragma warning(disable:4996) //scanf()등 ANSI C함수 에러 메세지 무시

/*
정수 5개를 담는 배열선언
사용자로부터5개입력받은뒤
최댓값과 최솟값을 출력하기
*/

#define MAX 5

int main() {

	int score[MAX];

	printf("%d 개의 값을 입력하세요 : ", MAX);
	for (int i = 0; i < MAX; i++) {
		scanf("%d", &score[i]);
	}
	printf("입력한 값들은 : ");
	for (int i = 0; i < MAX; i++) {
		printf("%d ", score[i]);
	}
	printf("\n");

	//  최댓값 구하기 알고리즘
	// 45 12 67 82 3
	int i;
	int max = score[0];
	for (i = 1; i < MAX; i++) {
		if (max < score[i]) {
			max = score[i];
		}
	}
	printf("최댓값 = %d\n", max);
	
	int min = score[0];
	for (i = 1; i < MAX; i++) {
		if (min > score[i]) {
			min = score[i];
		}
	}
	printf("최솟값 = %d\n", min);



	printf("\nENTER를 누르면 종료됩니다\n");
	getchar();
	return 0;
} //end main()