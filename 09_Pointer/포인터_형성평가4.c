#include <stdio.h> //ǥ�� �������� 
#pragma warning(disable:4996) //scanf()�� ANSI C�Լ� ���� �޼��� ����

/*
10���� ���Ҹ� ������ �� �ִ� �迭�� ������ �� ������ ������ �̿��Ͽ� �ڷḦ �Է¹޾� Ȧ���� ������ ¦���� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

3 5 10 52 1 97 36 25 13 29

odd : 7
even : 3
*/

int main() {

	int number[10] = { 0 };
	int *p = number; //�迭 = ������ 
	int odd = 0;
	int even = 0;

	for (int i = 0; i < 10; i++) {
		//scanf("%d", &p[i]); //����
		//p[i]�� �ּ�'��' �̴ϱ� �ּҰ��� �ּҴ�  &�� �ٿ��ش�. 
		scanf("%d", p + i); //���� 
		getchar();
		//������ ��ü p �� '�ּ�' �ϱ� &�Ⱥ��̰� p�� ���̸� �ȴ�. 

		if (p[i] % 2 == 0) 
		//=if (*(p+i) % 2 == 0) 
		{
			//*(p+i)�� �� (p+i)�ּ��� ���� �ǹ���.
			//*(p+i) = p[i]
			even++;
		}
		else {
			odd++;
		}
	}

	printf("odd : %d\n", odd);
	printf("even : %d", even);

	printf("\nENTER�� ������ ����˴ϴ�\n");
	getchar();
	return 0;
} //end main()