#include <stdio.h> //ǥ�� �������� 
#pragma warning(disable:4996) //scanf()�� ANSI C�Լ� ���� �޼��� ����

/*

*/

int main() {

	// ������ 2�� ���
	// 2 x 1 = 2
	// 2 x 2 = 4
	// ..
	// 2 x 9 = 18

	int i;
	for (i = 1; i < 10; i++)
	{
		printf("2 x %d = %d\n", i,i * 2);
	}

	//1~n���� �� ���ϱ� 

	{
		int n = 100;
		int sum = 0;
		for (int i = 0; i <= n; i++)
		{
			sum += i;
		}
		printf("sum = %d\n", sum);
	}


	printf("\nENTER�� ������ ����˴ϴ�\n");
	getchar();
	return 0;
} //end main()