#include <stdio.h> //ǥ�� �������� 
#pragma warning(disable:4996) //scanf()�� ANSI C�Լ� ���� �޼��� ����

/*
10 15 36 99 100 19 46 88 87 13
*/

int main() {

	int n;
	int mul3 = 0, mul5 = 0;	//3�� ���, 5�� ����� ����
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &n);
		getchar();

		if (n % 3 == 0)
		{
			mul3++;
		}
		if (n % 5 == 0)
		{
			mul5++;
		}
	}
	printf("Multiples of 3 : %d\n", mul3);
	printf("Multiples of 5 : %d\n", mul5);


	
	getchar();
	return 0;
} //end main()