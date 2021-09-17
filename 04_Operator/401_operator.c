#include <stdio.h> //ǥ�� �������� 
#pragma warning(disable:4996) //scanf()�� ANSI C�Լ� ���� �޼��� ����

/*

*/

int main() {

	printf("��� ������ +, -, *, /, %\n");
	//% = ������ ������ 
	int result = 10 % 3;
	printf("result = %d\n", result);

	result = 4 * 2 + 6 / 2;
	printf("result = %d\n", result);
	
	result = 4 * (2 + 6) / 2;
	printf("result = %d\n", result);

	//===========================

	// ���� ���� ������
	// +=, -=, *=, /=, %= ..... ��κ��� ���׿����ڿ� ���� ���մ��Կ����� ����
	int n = 10;
	n = n + 3; // '������ ���� ��' �� +3 ���� 
	n += 3; // ���� ������ ������ �ϴ� ���մ��Կ����� 
	printf("n = %d\n", n);

	n %= 5; // n = n % 5;
	printf("n = %d\n", n);

	n -= 32;
	printf("n = %d\n", n);

	//���������� (���׿�����)
	// ++(1����)	, --(1����)

	n = 10;
	printf("n = %d\n", n);
	n = n + 1;
	printf("n = %d\n", n);
	n += 1;
	printf("n = %d\n", n);
	n++; 
	printf("n = %d\n", n);
	//�� �Ȱ��� ���� ��

	//===========================

	n--; //postfix���
	printf("n = %d\n", n);
	--n; //prefix��� 
	printf("n = %d\n", n);

	// postfix ��� : �������� '����' �� �������� ����
    // prefix ��� :  �������� '����' �� �������� ����

	int num1 = 5;
	int num2 = num1++ + 4; // = 9 
	//+�� ���� �� num1���� ������. �׷��� ���� 5+4=9 ���� 
	printf("num1=%d, num2=%d\n", num1, num2);

	num1 = 5;
	num2 = ++num1 + 4; // = 10
	printf("num1=%d, num2=%d\n", num1, num2);
	// ������ ���������ڴ� ����� '��'���� ����ϴ°��� ������
	// �� ���ó�� �򰥸��ϱ�..

	num1 = 5;
	num2 = num1 + 4;
	num1++;
	printf("num1=%d, num2=%d\n", num1, num2);

	//���Կ����ڵ� ���������� �ִ�
	printf("num1 = %d\n", num1 = 2);

	int num3 = num2 = num1; 
	//num2 = num1�� ���� ����, ���� num3 = num2�� ����
	//���Կ����ڴ� ������������ ����
	printf("num3 = %d\n", num3);

	//===========================

	// �񱳿�����(���迬����)
	// ����� '��' �̸� 1,  '����' �̸� 0 (C��� Ư¡)
	// > , < , >=, <=, ==, != ...
	printf("\n�񱳿�����\n");
	printf("10>3 = %d\n", 10 > 3); // = 1
	printf("10<3 = %d\n", 10 < 3); // = 0
	printf("10>=3 = %d\n", 10 >= 3); // = 1
	// =>�̷� ������ ����.. 
	printf("10==3 = %d\n", 10 == 3); // = 0 
	// == 10�� 3�� �����ϱ�?  
	printf("10!=3 = %d\n", 10 != 3); // = 1 
    // != 10�� 3�� �ٸ��ϱ�?
	
	//===========================

	// ����������
	// &&, ||, !
	// && : and ������, ������ ����, �ǿ����� ������ �Ѵ� '��' �� ��츸 ��
	// || : or ������,  ������ ���� ,  �ǿ����� ������ ���� �ϳ��� ���̾ ��
	// or������ - ���� �����ؼ� �Ѵ� �����̾�� ������
	// ! : not ������,  ��->����, ����->�� 

	/*

	T && T == >  T(1)
	T && F == >  F(0)
	F && T == >  F(0)
	F && F == >  F(0)

	T || T == >  T(1)
	T || F == >  T(1)
	F || T == >  T(1)
	F || F == >  F(0)

	!T == >  F(0)
	!F == >  T(1)

	*/

	printf("\n����������\n");
	result = (10 > 4) && (45 < 90); // T && T = 1
	printf("result = %d\n", result); // 1

	result = (10 < 4) && (45 < 90); // F && T = 0
	printf("result = %d\n", result); // 0

	// C���� 0 �� '����',  0 �̿��� ���� '��' ���� �����Ѵ�.
	// java, python ���� boolean Ÿ�� ����
	
	result = 10 - 10 || 100 + 1; // = 1
	printf("result = %d\n", result);

	result = 10 - (10 || 100) + 1; // = 10
	printf("result = %d\n", result);

	// ! : not ������ 
	result = 54 % 2 == 0; // = 1
	printf("result = %d\n", result);

	result = !(54 % 2 == 0); // = 0
	printf("result = %d\n", result);

	printf("%d,%d,%d\n", 100 * 2, -1, 0);

	printf("%d,%d,%d\n", !(100 * 2), !(-1), !(0)); //0,0,1




	printf("\nENTER�� ������ ����˴ϴ�\n");
	getchar();
	return 0;
} //end main()