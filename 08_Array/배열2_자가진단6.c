#include <stdio.h> //ǥ�� �������� 
#pragma warning(disable:4996) //scanf()�� ANSI C�Լ� ���� �޼��� ����

/*
5�� �л��� ���� ���� ���� ���� 4������ ������ �Է� �޾Ƽ� �� ���κ���
����� 80 �̻��̸顰�հݡ� �׷��� �����顰���հݡ��� ����ϰ� �հ��� 
����� ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

85 67 95 65
80 95 86 56
100 98 67 86
95 76 84 65
67 86 90 76
*/

int main() {

	int score[5][4]; //����л����� �޴� �迭
	float onescore[5] = { 0 }; //�Ѹ�������

	int i, j;
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 4; j++) {
			scanf("%d", &score[i][j]);
			onescore[i] += score[i][j];
		}
	}

	int successcount = 0;

	for (i = 0; i < 5; i++) {
		if (onescore[i] / 4 >= 80) {
		printf("pass\n");
		successcount++;
	}
		else {
			printf("fail\n");
		}
	}

	printf("Successful : %d", successcount);

	return 0;
} //end main()