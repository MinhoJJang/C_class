#include <stdio.h> //ǥ�� �������� 
#pragma warning(disable:4996) //scanf()�� ANSI C�Լ� ���� �޼��� ����

/*
// do ~ while
// �ϴ� �ѹ� �����ϰ� ���� ���ǽ� �˻�





*/

int main() {

	int i = 1;
	while (i < 0) {
		printf("while������ \n");
	} //�ѹ��� ����ȵ�

	i = 1;
	do {
		printf("do~while������ %d\n",i);
	} while (i < 0); //�ϴ� �����ϰ� while�� ���̸� ����ϰ� �����̸� ���� 
	
	printf("\nENTER�� ������ ����˴ϴ�\n");
	getchar();
	return 0;
} //end main()