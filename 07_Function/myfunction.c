#include <stdio.h> //표준 입출력헤더 
#pragma warning(disable:4996) //scanf()등 ANSI C함수 에러 메세지 무시
//#include "myfunction.h"

//함수 정의 파일 

int power(int base, int exp) {
	int result = 1;
	for (int i = 0; i < exp; i++); {
		result *= base;
	}
	return result;
}

double doubleup(double num) {
	return num * 2;
}
