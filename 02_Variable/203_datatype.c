#include <stdio.h>


	//����
	//char 1
	//
	//����
	//short 2
	//int  4  -> 2�� 32�� .. -21��~+21�� ǥ�� 
	//long 4
	//
	//�Ǽ� 
	//float 4
	//double 8byte
	//
	//1byte = 8bit 



int main() {

	printf("������Ÿ��\n");

	//����Ÿ�Ժ��� 
	int i = 0;
	int a = 100, b = 200, c = 300;

	short s1, s2, s3 ,s4 = 400;
	long l1, l2 = 10000000, l3; 

	char ch1; // 1byte = 8bit = 256���� ���� ǥ������ \

	ch1 = 'a'; // 'a'�� a�� �ڵ尪(����)�� ���� -> �ƽ�Ű�ڵ� 
					// CHAR�����ϳ�  -->Ȧ����ǥ ��� 

	printf("ch1�� ���� = %d\n", ch1); // a�� 97
	printf("ch1�� ���� = %c\n", ch1); // %c ���������ڴ� �����ϳ��� ��� 

	printf("ch1�� ���� = %d\n", ch1+1);
	printf("ch1�� ���� = %c\n", ch1+1); // a������ b�ϱ� a+1 = b

	ch1 = 'A';
	printf("ch1�� ���� = %d\n", ch1); //�빮��  A�� �ڵ尪�� 65,
	printf("ch1�� ���� = %c\n", ch1);

	//printf ���������ڵ� 
	//%%=>%��� 
	printf("%d, %x, %c\n", 65, 65, 65);


	char ch2 = 200; 
	printf("ch2 = %d\n", ch2); 

	//����Ÿ���� ������ �����÷ο�, ����÷ο� �߻� 
	// 0~127, -128 -127, .... -1, 0, 1, 2, .... 127, -128, ...

	{
		//signed(��ȣ�ִ�), vs unsigned(��ȣ����)
		signed char ch1 = 200; //  = char ch1�� ���� , signed�� ������ +1,+2���� ����
		unsigned char ch2 = 200; // ��ȣ�������Ƿ� 0~+255���� ǥ��  

		printf("ch1=%d, ch2=%d\n",ch1, ch2);

	}
	

	{
		//�Ǽ�Ÿ�� 

		float f1 = 3.141592; // 4byte
		double d1 = 3.141592; //8byte 

		printf("f1 = %.2f\n", f1); //�Ҽ��� ���ڸ� ���, ���Ϲݿø�
		printf("d1 = %.4lf\n", d1);

		//�Ǽ�Ÿ�Կ����� �뷮�� ���� 
		//���е�(precision)�� ���̰�����
		//float = �Ҽ��� 6-9�ڸ�
		//double = �Ҽ��� 15-18�ڸ� 

		float f2 = 0.0123456789;
		double d2 = 0.123456789;

		//%f�� ����ϸ� �Ҽ��� �Ʒ� 6�ڸ����� ��� 
		printf("f2 = %f, d2 = %f\n", f2, d2);

		printf("f2 = %.10f, d2 = %.10f\n", f2, d2);

	}

	getchar();
	return 0;
}
