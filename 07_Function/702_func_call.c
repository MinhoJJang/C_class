#include <stdio.h> //ǥ�� �������� 
#pragma warning(disable:4996) //scanf()�� ANSI C�Լ� ���� �޼��� ����

/*

*/

void bbb() {
	printf("5. bbb()�Լ� ����\n");
	printf("6. bbb()�Լ� ����\n");
}

void aaa() {
	printf("3. aaa()�Լ� ����\n");

	bbb(); //bbb()ȣ��

	printf("4. aaa()�Լ� ����\n");

	//aaa();
}


int main() {

	printf("1. main() �Լ� ����\n");
	aaa();
	printf("2. main() �Լ� ����\n ���ʹ���\n");
	getchar();
	return 0;
} //end main()