#include <stdio.h> // ǥ������� printf, scanf ...

#pragma warning(disable:4996) // scanf() �� ���� C�Լ� ���� ����


/*
*	if(���ǽ�)
*		'��'�϶� ����
*	else
*		'����'�϶� ����
*
*
*	if(���ǽ�1)
*		���ǽ�1 �� '��' �϶� ����
*	else if (���ǽ�2)
*		���ǽ�2 �� '��' �϶� ����
*	else if (���ǽ�3)
*		���ǽ�3 �� '��' �϶� ����
*	..
*	else
*		�� ���ǽĵ� ��� �����϶� ����
*/




int main()
{
	int n = 9;

	if (n % 2 == 0)
	{
		// n�� ¦��
		printf("¦���Դϴ�\n");
	}
	else
	{
		//n�� Ȧ��
		printf("Ȧ���Դϴ�\n");
	}

	//--------------------------------------
	// if .. else if .. else if...

	double point = 0;
	printf("������ �Է��ϼ���\n");
	scanf_s("%lf", &point);

	getchar(); //���ʿ�����?

	if (point >= 4.0) {
		printf("A����\n");
	}
	else if (point >= 3.0) {
		printf("B����\n");
	}
	else if (point >= 2.0) {
		printf("C����\n");
	}
	else if (point >= 1.0) {
		printf("D����\n");
	}
	else{
		printf("F�Դϴ�\n");
	}

	printf("\n�ƹ� Ű�� �Է��ϸ� ���α׷� ����˴ϴ�\n");
	getchar();
	return 0;
} // end main()