#include <stdio.h>
#pragma warning(disable: 4996) //scanf ������ ���� ����

//stdio.h = standard input output header
//ǥ������� ��� 

// �Է�: (input) - Ű����(�⺻ standard input), ���콺, ��Ʈ��ũ, ����...
// ���: (output) - �����(�⺻ standard output), ������, ��Ʈ��ũ, ����..

int main() {

	printf("scanf()�Է�\n");
	int kor, eng, math=0;
	printf("���������� �Է��ϼ��� : ");
	scanf("%d", &kor);
	printf("���������� �Է��ϼ��� : ");
	scanf("%d", &eng);
	printf("���������� �Է��ϼ��� : ");
	scanf("%d", &math);
	// Ű����κ��� ���� �Ѱ� �Է� -> kor ������ ����
	// ���Թ��� ������ �տ� & ���̱�

	// TODO

	printf("�Է��Ͻ� ������ %d,%d,%d �Դϴ�\n", kor,eng,math);

	//������ ��� ���ϱ� 
	int total = kor + eng + math;
	printf("������ : %d�� �Դϴ�\n", total);

	//float avg = total / 3; //������ ������ ����̶� avg���� ���������� 

	//float avg = total / 3.0; //�Ǽ����� �������� '�Ǽ�' Ÿ��

	float avg = (float)total / 3; //����ȯ �����ڸ� ����Ͽ� �Ǽ�Ÿ������ ���� 

	printf("����� : %.2lf�� �Դϴ�\n", avg);


	getchar();
	getchar();
	return 0;
}