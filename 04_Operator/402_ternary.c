#include <stdio.h> //ǥ�� �������� 
#pragma warning(disable:4996) //scanf()�� ANSI C�Լ� ���� �޼��� ����

/*

*/

int main() {

	// ���� ������
	// ( ���ǽ� ) ? (���ΰ�� ���) : (������ ��� ���)

	int result;

	result = (10 > 3) ? 200 : -100;
	printf("result = %d\n", result);

	result = (10 < 3) ? 200 : -100;
	printf("result = %d\n", result);

	int a = 45;
	int b = 60;
	// a�� b�� ���̰���?
	int diff = (a > b) ? (a - b) : (b - a);
	printf("diff = %d\n", diff);


	printf("\nENTER�� ������ ����˴ϴ�\n");
	getchar();
	return 0;
} //end main()