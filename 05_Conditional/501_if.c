#include <stdio.h> // ǥ������� printf, scanf ...
#pragma warning(disable:4996) // scanf() �� ���� C�Լ� ���� ����

/*
*	��� (Control) : ���α׷��� �帧�� ����(����)
*	1. ���ǹ�(Conditional)
*	: if ~ else, switch ~ case
*
*	2. ��ȯ��(loop)
*	: for, while, do ~ while
*/

int main()
{
	//		if(���ǽ�) <-- ���ǽ��� '��'�̸� (0�� �ƴ� ��� ��)
	//      �� ������ '�� ����' Ȥ�� '�� ��' �� �����Ų��
	//      �����̸� �������� �ʰ� �Ѿ��

	int n = 21;

	{
		if (n % 2 == 0)
		printf("¦���Դϴ�\n");
	//else if(n % 2 != 0)
	//	printf("Ȧ���Դϴ�\n"); 
	}
	 
	// n �� 3�� ����̸� "3�� ����Դϴ�" ��� ���

	if (n % 3 == 0)
	{
		printf("%d ��", n);
		printf("3�� ����Դϴ�\n");
	}

	printf("\nENTER �� ������ ����˴ϴ�\n");
	getchar();
	return 0;
} // end main()