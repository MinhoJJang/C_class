#include <stdio.h>
#pragma warning(disable: 4996) //scanf 사용관련 에러 무시

//stdio.h = standard input output header
//표준입출력 헤더 

// 입력: (input) - 키보드(기본 standard input), 마우스, 네트워크, 파일...
// 출력: (output) - 모니터(기본 standard output), 프린터, 네트워크, 파일..

int main() {

	printf("scanf()입력\n");
	int kor, eng, math=0;
	printf("국어점수를 입력하세요 : ");
	scanf("%d", &kor);
	printf("영어점수를 입력하세요 : ");
	scanf("%d", &eng);
	printf("수학점수를 입력하세요 : ");
	scanf("%d", &math);
	// 키보드로부터 정수 한개 입력 -> kor 변수에 대입
	// 대입받을 변수명 앞에 & 붙이기

	// TODO

	printf("입력하신 점수는 %d,%d,%d 입니다\n", kor,eng,math);

	//총점과 평균 구하기 
	int total = kor + eng + math;
	printf("총점은 : %d점 입니다\n", total);

	//float avg = total / 3; //정수와 정수의 계산이라 avg값이 정수가나옴 

	//float avg = total / 3.0; //실수와의 연산결과는 '실수' 타입

	float avg = (float)total / 3; //형변환 연산자를 사용하여 실수타입으로 변경 

	printf("평균은 : %.2lf점 입니다\n", avg);


	getchar();
	getchar();
	return 0;
}