#include <stdio.h> // ǥ������� printf, scanf ...

#pragma warning(disable:4996) // scanf() �� ���� C�Լ� ���� ����




int main()
{
	int  n = 0;
	scanf("%d", &n);
	getchar();

	switch (n) // switch(����)
	{
	case 1: //n ���� 1�� ��� �Ʒ� �ڵ� ���� 
		printf("n ���� 1 �Դϴ�\n");
		break; //switch �ڵ���� ����

	case 2: //case���� ������ ����.
		printf("n ���� 2 �Դϴ�\n");
		break;
	
	case 3: //case���� ������ ����.
		printf("n ���� 3 �Դϴ�\n");
		break;
	}
	
	
	// TODO :  n���� ¦���̸� "¦���Դϴ�" ���
	// Ȧ���̸� "Ȧ���Դϴ� " ���
	// switch ~ case �� ���

	switch (n % 2)
	{
	case 0:
		printf("¦���Դϴ�\n");
		break;

	case 1:
		printf("Ȧ���Դϴ�\n");
		break;
	}

	//float f = 3.14;
	//switch (f) // f�� ���� �Ǽ� �ü����� 
	//{
	//	case..
	//}

	// 4���� -> A
	// 3���� -> B
	// 2���� -> C
	// 1���� -> D
	// �� ���� -> F

	double point =6;

	switch ((int)point) //(int)�Ǽ� -> int Ÿ�� ��ȯ, 3.4->3(�Ҽ��� ���ŵ�)
	
	{
		case 4: 
			printf("A �Դϴ�\n");
			break; 

		case 3: 
			printf("B �Դϴ�\n");
			break;

		case 2: 
			printf("C �Դϴ�\n");
			break;

		case 1: 
			printf("D �Դϴ�\n");
			break;

		case 0: 
			printf("F �Դϴ�\n");
			break;
			
		default: //�� ��� case�� �ش����� �ʴ� ��� 
			printf("�̹��б�� �۷���\n");
		}


	





	printf("\n�ƹ� Ű�� �Է��ϸ� ���α׷� ����˴ϴ�\n");
	getchar();
	return 0;
} // end main()