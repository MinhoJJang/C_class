#include <stdio.h> //ǥ�� �������� 
#pragma warning(disable:4996) //scanf()�� ANSI C�Լ� ���� �޼��� ����

/*
10���� ������ �Է¹޾� �迭�� ������ �� ¦�� ��° �Էµ� ���� �հ�
Ȧ�� ��° �Էµ� ���� ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

����� �ݿø��Ͽ� �Ҽ�ù°�ڸ����� ����Ѵ�.
*/

int main() {

	int arr[10];
	int total = 0;
	float avg = 0;
	int count = 0;

	for (int i = 0; i < 10; i++) {
		scanf("%d", &arr[i]);
		if (i % 2 != 0) //¦����° �Էµ� ��
		{
			total += arr[i];
		}
		else { //Ȧ����° �Էµ� ��
			avg += arr[i];
			count++;
		}
	}
	printf("sum : %d\n", total);
	printf("avg : %.1f\n", avg / count);
	
	return 0;
} //end main()