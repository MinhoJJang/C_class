#include <stdio.h> //ǥ�� �������� 
#pragma warning(disable:4996) //scanf()�� ANSI C�Լ� ���� �޼��� ����


/*
*	�迭�� ũ�� (size) : �迭�� �뷮ũ�� (byte)
*	�迭�� ���� (length) : �迭������ ����
*/

int main() {

	//sizeof()������ 
	//�������� ũ�⸦ byte(����)�� ����
	printf("%d\n", sizeof(100)); //���� ���ͷ��� ũ��, 
	//100�� intŸ���̴ϱ� 4byte
	short s = 100;
	printf("%d\n", sizeof(s)); //������ ũ�� 2byte
	printf("%d\n", sizeof(double)); //8

	int arr[3];
	printf("sizeof(�迭) : %d\n", sizeof(arr)); //4byte 3��->12
	printf("arr[0]�� size : %d\n", sizeof(arr[0]));

	// �迭�� ���� ���ϴ� ����
	// sizeof(�迭�̸�) / sizeof(�迭����Ÿ��)
	// sizeof(�迭�̸�) / sizeof(�迭�� ù��° ����)

	printf("arr�� length = %d\n", sizeof(arr) / sizeof(int));

	// int arr2[0]; �Ұ�����. C���� ���� 0�ڸ� �迭 ���� �Ұ� 

	printf("\nENTER�� ������ ����˴ϴ�\n");
	getchar();
	return 0;
} //end main()