#include <stdio.h> // ǥ������� printf, scanf ...

#pragma warning(disable:4996) // scanf() �� ���� C�Լ� ���� ����

#define GOOD 1
#define BAD 0

int main()
{
	if (10 < 4); // ����!   ���ǹ� �ڿ� ; �� �ٷ� ���̴� �Ǽ� ���� ����!
	// �����ݷ��� ���̸� ������ ���������Ƿ� �Ʒ� ������ if������ ������� ����� 
	{
		printf("����Ǹ� �ȵſ�\n");
	}

	int isGood = BAD;

	if (isGood == GOOD) // ���Կ����� = �� �񱳿����� == �� �򰥸��� ���� 
	{
		printf("���մϴ�\n");
	}
	else
	{
		printf("�Ǵ��Դϴ�\n");
	}


	printf("\n�ƹ� Ű�� �Է��ϸ� ���α׷� ����˴ϴ�\n");
	getchar();
	return 0;
} // end main()

//jungo1
//������� ��
//���,�Է�,������ �غ��� 