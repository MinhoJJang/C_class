#include <stdio.h> //ǥ�� �������� 
#pragma warning(disable:4996) //scanf()�� ANSI C�Լ� ���� �޼��� ����

/*
���� 5���� ��� �迭����
����ڷκ���5���Է¹�����
�ִ񰪰� �ּڰ��� ����ϱ�
*/

#define MAX 5

int main() {

	int score[MAX];

	printf("%d ���� ���� �Է��ϼ��� : ", MAX);
	for (int i = 0; i < MAX; i++) {
		scanf("%d", &score[i]);
	}
	printf("�Է��� ������ : ");
	for (int i = 0; i < MAX; i++) {
		printf("%d ", score[i]);
	}
	printf("\n");

	//  �ִ� ���ϱ� �˰���
	// 45 12 67 82 3
	int i;
	int max = score[0];
	for (i = 1; i < MAX; i++) {
		if (max < score[i]) {
			max = score[i];
		}
	}
	printf("�ִ� = %d\n", max);
	
	int min = score[0];
	for (i = 1; i < MAX; i++) {
		if (min > score[i]) {
			min = score[i];
		}
	}
	printf("�ּڰ� = %d\n", min);



	printf("\nENTER�� ������ ����˴ϴ�\n");
	getchar();
	return 0;
} //end main()