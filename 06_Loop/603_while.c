#include <stdio.h> //ǥ�� �������� 
#pragma warning(disable:4996) //scanf()�� ANSI C�Լ� ���� �޼��� ����

/*
/*
* ���ǽ��� '��' �� ���� while �� �ݺ�
*
*	while(���ǽ�){
*		..
*		..
*	}
*
*/



int main() {

	int i = 0;
	while (i < 5) {
		printf("i=%d\n", i);
		i++;
	}

	printf("------\n");

	// while������ ������ 2�� ���
	// 2 x 1 = 2
	// 2 x 2 = 4
	// ..
	// 2 x 9 = 18

	int k = 1;
	while (k < 10) {
		printf("2 x %d = %d\n", k, k * 2);
		k++;
	}





	printf("\nENTER�� ������ ����˴ϴ�\n");
	getchar();
	return 0;
} //end main()