#include <stdio.h> //ǥ�� �������� 
#pragma warning(disable:4996) //scanf()�� ANSI C�Լ� ���� �޼��� ����

/* 
//0602���� 
ȣ���̳� �б��� 6�г��� �� ���� �ִµ� �� ���� ��ǥ�� �� �� �����Ͽ�
�������� ������ �Ͽ���.
�ݺ��� �� ���� ���⸦ �� ������ �Է¹޾� �� �ݺ��� ���⸦ �� ������ 
�հ踦 ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
(�ݵ�� �迭�� �̿��ϰ� �Է��Ŀ� ����ϴ� ������� �ϼ���.)

1class? 15 2 35
2class? 33 1 6
3class? 5 10 19
4class? 1 8 55

1class : 52
2class : 40
3class : 34
4class : 64
*/

int main() {

	int score[4][3] = { 0 };
	int max[4] = { 0 };
	//char sixthclass [29]= "\0";

	for (int i = 0; i < 4; i++) {
		//scanf("%s", &sixthclass[i*7]);
		//������ ��¥...�����Ÿ� �Է��� ������..?
		for (int j = 0; j < 3; j++) {
			scanf("%d", &score[i][j]);
			max[i] += score[i][j];
		}
	}

	for (int i = 0; i < 4; i++) {
		printf("%dclass? ", i+1);
	}

	for (int i = 0; i < 4; i++) {
		printf("%dclass : %d\n", i + 1, max[i]);
	}
	getchar();
	return 0;
} //end main()