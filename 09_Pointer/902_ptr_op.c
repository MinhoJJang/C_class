#include <stdio.h> //ǥ�� �������� 
#pragma warning(disable:4996) //scanf()�� ANSI C�Լ� ���� �޼��� ����

/** ������ ����
*
*	���:
*	  ������ -> �ּ�
*	  *������ -> �� �ּҰ� ����Ű�� ��
*	������ Ÿ�� -> �� �ּҰ� ����Ű�� ���� Ÿ��
*
*	�����ͺ����� +, - ������ �ϴ� ����
*	�ᱹ �ּҰ��� ���� �ϴ� ���ε�,
*	�ּҰ��� �󸶸�ŭ ���� �ϴ��Ĵ� '������ Ÿ��' �� ���� �ٸ���
*
*	ex) int* ������ �� ��� ����Ű�� ���� Ÿ����  int (4byte) �̱� ������
*		������ ���� + 1 ������ �� ��� �ּҰ��� 4�����Ѵ�.
*
**/

//int �� �ּҰ��� �׻� 4�ǹ���ΰ�?? 


int main() {

	int n = 555;
	int *p = &n;

	printf("n = %d, p = %p, *p = %d\n", n, p, *p);

	//n,p  �� ���� +1����
	printf("n+1 = %d, p+1 = %p, *(p+1) = %d\n", n+1, p+1, *(p+1));

	printf("\n");

	short s = 222;
	short *p2 = &s; //p2 ��  short* Ÿ�� short�� 2byte

	printf("s = %d, p2 = %p\n", s, p2);
	printf("s + 1 = %d, p2 + 1 = %p\n", s + 1, p2+ 1); //	p2+2
	printf("s + 3 = %d, p2 + 3 = %p\n", s + 3, p2 + 3); //p2+6

	double d = 3.14;
	double *p3 = &d; // p3 is double type pointer 
	printf("d = %f, p3 = %p\n", d, p3);
	printf("d + 1 = %f, p3 + 1 = %p\n", d + 1, p3 + 1); //p3+8
	printf("d + 3 = %f, p3 + 3 = %p\n", d + 3, p3 + 3); //p3+24



	printf("\nENTER�� ������ ����˴ϴ�\n");
	getchar();
	return 0;
} //end main()