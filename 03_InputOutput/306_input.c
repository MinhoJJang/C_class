#include <stdio.h>
#pragma warning(disable: 4996)

int main() {

	//char �� �Է¹��� �� ����
	char ch;
	int a, b;

	printf("���� �ϳ� �Է� : ");
	scanf("%c", &ch);
	printf("�Է��� ���ڴ� : %c \n", ch);

	printf("���� �ϳ� �Է� : ");
	scanf("%d", &a);

	printf("�� ���� �ϳ� �Է� : ");
	
	/**�߿�**/
	getchar(); 
	/*******/
	//getchar�� ���ۿ� �����ִ� �ٹٲ޹��� ������ 

	scanf("%c", &ch);
	//%c�� ������ ������ ���� �ϳ��� ����(cmd â���� �츮�� ������ ���ͱ��� ����)
	//���ۿ� �ٹٲ޵��� ���鹮�ڰ� �����ִٸ� �̸� �����ؾ��� 

	//���� �Է� �� %c �Է��Ϸ��� ���� ���� ���� �� ����
	
	printf("a = %d, ch = %c \n", a, ch);


	getchar();

	printf("ENTER�� ������ ���α׷��� ����˴ϴ�\n");
	getchar();
	return 0;
}