#include <stdio.h> //ǥ�� �������� 
#pragma warning(disable:4996) //scanf()�� ANSI C�Լ� ���� �޼��� ����
#include "myfunction.h" //�Լ�����, ���, ��ũ�� �� 

int main() {

	printf("MAX =%d\n", MAX);
	printf("MIN =%d\n", MIN);

	int i = 3, j = 4;
	printf("power() ��� : %d\n", power(i, j)); //??���̶��
	printf("doubleup() ��� : %.1lf\n", doubleup(j)); 

	//TODO


	printf("\nENTER�� ������ ����˴ϴ�\n");
	getchar();
	return 0;
} //end main()