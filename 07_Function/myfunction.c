#include <stdio.h> //ǥ�� �������� 
#pragma warning(disable:4996) //scanf()�� ANSI C�Լ� ���� �޼��� ����
//#include "myfunction.h"

//�Լ� ���� ���� 

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
