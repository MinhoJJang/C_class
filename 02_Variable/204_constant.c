#include <stdio.h>

/*
*	��� (Constant)
*	�ѹ� ���� �������� �����Ҽ� ���� ������
*	(������ �ݴ�)
*
*	���1 : const Ű���� ���
*	���2 : #define ���
*/

#define MAX_VALUE 100 

int main() {

	printf("���(constant)\n");

	const int NUMBER = 10; 
	//	int Ÿ�� ��� NUMBER ���� �� �ʱ�ȭ
	// ����� �ѹ� ���� �����ϸ� ���� �Ұ� 
	//const n -> ��� n 
	//����� ���� �빮�ڻ��
	//n = 200; 
	printf("NUMBER = %d\n", NUMBER);

	// ��VS rename : CTRL+R, CTRL+R
	// ������ �ٲܶ� ���� 

	printf("MAX_VALUE = %d\n", MAX_VALUE);
	//���������� ���� �Ұ��� 

	int a;
	a = 100;
	//100 = a; //�Ұ����� 
	// �ڵ�� ���� �Է��ϴ� ����, ���ڴ� literal ��� 


	getchar();
	return 0;
}