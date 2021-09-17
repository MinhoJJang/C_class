#include <stdio.h> //ǥ�� �������� 
#pragma warning(disable:4996) //scanf()�� ANSI C�Լ� ���� �޼��� ����

/** �����Ϳ� �迭
*  �迭�� �̸��� �����ʹ�!  ������ '���'��!
*	������ ������ ����ȴ�.
*
*	�迭÷�� ������ []  �� �ᱹ ������ �����̴�
*
*		arr[n] �� *(arr + n)   �ڡڡ�
*
**/

//�迭�� �Ű������� �޴� �Լ�, �����ͷ� ����, length ���� �Ű������� ���� �Ѱ��־����
// �迭�̸��� �� �迭�� '�ּ�' ��.  �����Ϳ� ����(ó��) �����Ѵ�
// Ÿ����?  int* Ÿ��

int calcTotal(int *p, int length) {
	//int length = sizeof(p) / sizeof(int);
	//printf("length = %d\n", length); 
	//������ ��� �ȵ�..p���� �Է� �ȵǾ�����..

	int sum = 0;
	for (int i = 0; i < length; i++) {
		sum += p[i];
	}
	return sum;
}

int main() {

	// �迭�� ���ҵ��� ���ӵ� �޸� ������ ������ 
	int arr[3] = { 10,20,30 };

	//arr�� �ּ�, arr[i]�� �ּҰ�. 
	//arr = p , arr[i] = *p

	// �迭�̸��� �� �迭���ּ�. �����Ϳ� ���� ������
	// int * Ÿ��
	printf("arr = %p\n", arr); //�ּ�

	printf("*arr = %d\n", *(arr+2)); // = arr[2] = 30

	// ������ ���� (+,-)�۵���
	printf("arr +0 = %p, *(arr+0) = %d\n", arr + 0, *(arr + 0));
	printf("arr +1 = %p, *(arr+1) = %d\n", arr + 1, *(arr + 1));
	printf("arr +2 = %p, *(arr+2) = %d\n", arr + 2, *(arr + 2));

	printf("\n");
	printf("arr[0] = %d, *(arr+0) = %d\n", arr[0], *(arr + 0));
	printf("arr[1] = %d, *(arr+1) = %d\n", arr[1], *(arr + 1));
	printf("arr[2] = %d, *(arr+2) = %d\n", arr[2], *(arr + 2));

	//*���������� �켱������ �Ϲ����� ��������ں��� ����
	// *(arr+1) != *arr+1

	printf("\n");
	printf("*(arr+1) = %d, *arr+1 = %d\n", *(arr + 1), *arr + 1);

	//�ٸ� ������ ������ �迭�� ����ų��������
	int *p = arr; // int *p2 = p; �̰Ŷ� �������� 
	printf("\n");
	printf("p[0] = %d\n", p[0]);
	printf("p[1] = %d\n", p[1]);
	printf("p[2] = %d\n", p[2]);

	//�����ͺ����� �迭�� ������
	printf("sizeof(p) = %d\n", sizeof(p)); //4 
	printf("sizeof(arr) = %d\n", sizeof(arr)); //12

	int arr2[] = { 100,200,300 };
	p = arr2; //p�� ���� 
	//arr = arr2; //�Ұ��� 
	//��������� �̹� ������ �ƿ� �ٸ� �迭 �ΰ��� ���ٰ� ������ ������?

	printf("length = %d\n", sizeof(arr) / sizeof(int)); //3


	int total = calcTotal(arr, sizeof(arr) / sizeof(int)); 
	printf("������ =%d\n", total);
	//����.. arr �� *p �̰�, length�� sizeof(arr) / sizeof(int)�̴�..
	//�����ͺ��� *p �� arr�� ��� arr[0]+arr[1]+arr[2] = 60 

	int total1 = calcTotal(p, sizeof(p) / sizeof(int)); //length = 1
	printf("������ =%d\n", total1); //100�� ���ϴϱ� 100.

	printf("\nENTER�� ������ ����˴ϴ�\n");
	getchar();
	return 0;
} //end main()