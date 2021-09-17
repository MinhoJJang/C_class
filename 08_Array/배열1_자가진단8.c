#include <stdio.h> //표준 입출력헤더 
#pragma warning(disable:4996) //scanf()등 ANSI C함수 에러 메세지 무시

/*
10개의 정수를 입력받아 배열에 저장한 후 짝수 번째 입력된 값의 합과
홀수 번째 입력된 값의 평균을 출력하는 프로그램을 작성하시오.

평균은 반올림하여 소수첫째자리까지 출력한다.
*/

int main() {

	int arr[10];
	int total = 0;
	float avg = 0;
	int count = 0;

	for (int i = 0; i < 10; i++) {
		scanf("%d", &arr[i]);
		if (i % 2 != 0) //짝수번째 입력된 값
		{
			total += arr[i];
		}
		else { //홀수번째 입력된 값
			avg += arr[i];
			count++;
		}
	}
	printf("sum : %d\n", total);
	printf("avg : %.1f\n", avg / count);
	
	return 0;
} //end main()