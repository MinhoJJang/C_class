#include <stdio.h> //ǥ�� �������� 
#pragma warning(disable:4996) //scanf()�� ANSI C�Լ� ���� �޼��� ����

/*
*	���ȣ�� (Recursive Call)
*	- �Լ��� �����߿� �ڽ��� �ٽ� ȣ���ϴ� ��.
*   - ������ ������ �ܼ�ȭ�Ͽ� �����ϴ� ����
*	- ������ ���ȣ���� �Ұ�
*/

int func1(int n)
{
	printf("func1(%d) ȣ�� \n", n);
	return func1(n + 1);
}

// 4! = 4 x 3 x 2 x 1
// n! = n x (n - 1) x (n - 2) x ...  x 1
// n! = n x (n - 1)!
//             ��
//           n - 1  x (n - 2)!
//											... 0!
//  0! = 1




int factorial(int n) {

	if (n == 0) return 1;
	else {
		return n * factorial(n - 1);
	}
}

int main() {

	//func1(1);
	//���α׷��� ����..��?
	//�޸𸮰� ������ ����.
	//���ȣ���� ������ �Ϸ� �ϸ� ���α׷� ���� �����.

	int n = 5;
	printf("%d! = %d\n", n, factorial(n));

	printf("\nENTER�� ������ ����˴ϴ�\n");
	getchar();
	return 0;
} //end main()