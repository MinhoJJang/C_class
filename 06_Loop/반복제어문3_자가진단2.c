#include <stdio.h> //ǥ�� �������� 
#pragma warning(disable:4996) //scanf()�� ANSI C�Լ� ���� �޼��� ����

/*
�ڿ��� n�� �Է¹޾Ƽ� n�ٸ�ŭ ������ ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

5

*
**
***
****
*****

*/

int main() {

	int n;
	int j;
	scanf("%d", &n);
	getchar();

	//��������
	for (int i = 0; i <n; i++) {
		for (int j = 0; j <= i; j++) {
			printf("*");		
		}
		printf("\n");
	}

	//���ҹ���
	for (int i = 0; i < n; i++) {
		for (int p = n-1; p >= i+1; p--) {
			printf("*");
		}
		printf("\n");
	}

	printf("\nENTER�� ������ ����˴ϴ�\n");
	getchar();
	return 0;
} //end main()