#include <stdio.h> //ǥ�� �������� 
#pragma warning(disable:4996) //scanf()�� ANSI C�Լ� ���� �޼��� ����

/*
1   2   4   7   11
3   5   8   12
6   9   13
10 14
15


X��° ��.. 1+2+...+n<=X< 1+2+...+(n+1)
X���� ���� ���鼭.?
*/

int main() {

	int X;
	int count = 0;
	printf("���ڸ� �Է��ϼ���");
	scanf("%d", &X);
	getchar();

	int sum = 0;
	int n;

	for (n=1; ; n++)
	{
		sum += n;
		if (X - sum > 0)
		{
			count++;
			continue;
		}
		else if (X - sum <= 0)
		{
			break;
		}
	}
	printf("%d\n", count);
	printf("%d\n", sum-n);

	int mom = X - (sum - n);
	printf("%d\n", mom);

	printf("%d/%d", n + mom - 1, n - mom + 1);
	//printf("%d/%d", )
	




	printf("\nENTER�� ������ ����˴ϴ�\n");
	getchar();
	return 0;
} //end main()