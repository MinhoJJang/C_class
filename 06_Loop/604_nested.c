#include <stdio.h> //ǥ�� �������� 
#pragma warning(disable:4996) //scanf()�� ANSI C�Լ� ���� �޼��� ����

/*
��ø��ȯ��(nested-loop)
*/

int main() {

	// ������ 2�� ~ 9��
	// 2 x 1 = 2
	// ..
	// 2 x 9 = 18

	// 3 x 1 = 3
	// ..
	// 3 x 9 = 27
	// ...
	// 9 x 1 = 9
	// ..
	// 9 x 9 = 81

	int i = 0;
	int k = 0;

	for (i = 2; i < 10; i++)
	{
		printf("%d��\n", i);
		for (k = 1; k < 10; k++)
		{
			printf("%d x %d = %d\n", i, k, i*k);
		}
		printf("\n");
	}

	//�� �������� ��ø while������ ����� 
	//����
	//TODO

	printf("\nENTER�� ������ ����˴ϴ�\n");
	getchar();
	return 0;
} //end main()