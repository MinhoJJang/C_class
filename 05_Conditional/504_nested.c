#include <stdio.h> // ǥ������� printf, scanf ...
#pragma warning(disable:4996) // scanf() �� ���� C�Լ� ���� ����

//��ø(nested)���ǹ�
//-���ǹ� ���� ���ǹ�


int main()
{
	// ���� �ϳ� �Է� �޾Ƽ�
	// ¦���̸� "¦���Դϴ�" �� ����ϰ�
	//      ¦���̸鼭 3�� ����̸� "3�� ����Դϴ�" ��� ����ϼ���
	//      ¦���̸鼭 3�� ����� �ƴϸ� "¦�������� 3�� ����� �ƴմϴ�" ��� ����ϼ���
	// Ȧ���̸� "Ȧ���Դϴ�" �� ����غ�����

	int n;
	printf("�����ϳ� �Է��ϼ���: ");
	scanf("%d", &n);
	getchar();

	if (n % 2 == 0)
	{
		printf("¦���Դϴ�\n");
		
		if (n % 3 == 0) 
		{
			printf("3�� ����Դϴ�\n");
		}
		else 
		{
			printf("¦�������� 3�� ����Դϴ�\n");
		}
	}
	else
	{
		printf("Ȧ���Դϴ�\n");

		if (n % 5 == 0)
		{
			printf("5�� ����Դϴ�\n");
		}
		else
		{
			printf("Ȧ�������� 5�� ����� �ƴմϴ�\n");
		}
	}

	printf("=====================\n");

	switch (n % 2)
	{
	case 0:
		printf("¦���Դϴ�");
		
		{
			switch (n % 3)
		case 0:
			printf("3�� ����Դϴ�\n");
			break;
		default:
			printf("¦�������� 3�� ����� �ƴմϴ�\n");
		}

			break;

		case 1: 
			printf("Ȧ���Դϴ�");
			break;
	}


	printf("\nENTER �� ������ ����˴ϴ�\n");
	getchar();
	return 0;
} // end main()