#include <stdio.h> //ǥ�� �������� 
#pragma warning(disable:4996) //scanf()�� ANSI C�Լ� ���� �޼��� ����

/*
//   ����Ÿ�� �Լ��̸�(�Ű�����..)
// ���ϰ� : �Լ��� �ڱ⸦ ȣ���� �Լ��� �� 1���� �����ټ� �ִ�.
//          �̸� ���ϰ�(return value) �� ��
// �Ű�����(argument)
//      �Լ��� ȣ���ϴ� �ʿ��� �Ѱ��ִ� ���� ���� ����.
//      (Ÿ�� ������, Ÿ�� ������...) ����

// �ΰ��� ����(int) ���� �޾Ƽ�,  ������ �����ϰ�
// �� ����� ����(int)�ϴ� �Լ� add �����ϱ�

// �Լ��̸� : add
// �Ű����� : int, int
// ���ϰ� : int (�� �Ű������� ������ ����� ����)
*/

int add(int a, int b) {

	//�Լ���ü
	//scanf("%d%d", &a, &b);
	//getchar();
	int sum = a + b;
	return sum; //return ��: �Լ� �����ϰ� ȣ���� ������ �� ����
}

// �Լ��̸� : sub
// �Ű����� : int, int
// ���ϰ� : int  (�� �Ű������� �� ����� ����)

int sub(int c, int d) {

	//�Լ���ü
	//scanf("%d%d", &a, &b);
	//getchar();
	int sum = c - d;
	return sum; //return ��: �Լ� �����ϰ� ȣ���� ������ �� ����
}

//���ϰ��� ���� �Լ��� ����Ÿ�Կ�  void���

void mul(int a, int b) {
	printf("%d x %d = %d\n", a, b, a*b);
}

// �Լ� ���� (function declaration)
// �Լ� ���ǰ� ȣ��� ���Ŀ� �ְų�, Ȥ�� �ٸ� ���Ͽ� �ִ� ���
// �̸� �Լ� ������ ���־� ������ ������ ��.
// �Լ����𱸹�
//     ����Ÿ�� �Լ��� (�Ű����� ...);    <-- �Լ��� ������Ÿ��(����: prototype) �̶�� ��
double half(double); // �Լ�����ο��� �Ű������� ���� ���� 

int main() {

	int result = add(0,0); //�Լ� ȣ��. ������� result�� ���� 
	printf("result = %d\n", result);
	printf("40�� 30�� ���� ���� = %d\n", add(40, 30));
	printf("40 - 30 = %d\n", sub(40, 30));

	result = add(add(10,20),sub(40,80));
	printf("result = %d\n", result);

	mul(40, 30);

	printf("41�� 2�� ���� ����� %.1lf\n",half(41));

	printf("\nENTER�� ������ ����˴ϴ�\n");
	getchar();
	return 0;
} //end main()


  // C���� 
  // �Լ� ȣ��(���)�ϱ� ���� ��.��.�� ���� '����' �Ǿ� �ְų� Ȥ�� '����' �Ǿ� �־�� �Ѵ�.
double half(double arg) {
	return arg / 2;
}