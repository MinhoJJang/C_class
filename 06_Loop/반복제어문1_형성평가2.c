#include <stdio.h> //ǥ�� �������� 
#pragma warning(disable:4996) //scanf()�� ANSI C�Լ� ���� �޼��� ����

/*
0 �̻��� �������� �������� ���еǾ� �ݺ������� �־�����.

0�� �ԷµǸ� �ݺ����� ���߰� �� ������ �Է¹��� ���鿡 ���Ͽ�

Ȧ���� ������ ¦���� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

9 7 10 5 33 65 0

odd : 5
even : 1
*/

int main() {


	//���ѷ��� ����¹�
	//for(;;) 
	//while(1) ->while(��) -> ���ѷ���
	int n;
	int odd = 0; //Ȧ��
	int even = 0; //¦�� 

	for ( ; ; ) {
		scanf("%d", &n);
		getchar();

		if (n == 0)
		{
			break;
		}
		else if (n % 2 == 0)
		{
			even++;
			continue;
		}
		else if (n % 2 == 1)
		{
			odd++;
			continue;
		}
	}
	printf("odd : %d\n", odd);
	printf("even : %d\n", even);



	printf("\nENTER�� ������ ����˴ϴ�\n");
	getchar();
	return 0;
} //end main()