#include <stdio.h> //ǥ�� �������� 
#pragma warning(disable:4996) //scanf()�� ANSI C�Լ� ���� �޼��� ����

/*
// break, continue

// ��ȯ�� �ȿ��� break�� ������, �ڱ⸦ ���δ� ���� ����� ��ȯ�� ����.
// ��ȯ�� �ȿ��� continue�� ������, �ڱ⸦ ���δ� ���� ����� ��ȯ�� ���� ���ư�




*/

int main() {

	int count=0;
	for (int i = 1; ; i++) {
		
		if (i % 7 == 0) {
			break; // ���� ������ ��� �Լ����� 
		}
		else if (i % 7 != 0) {
			count++;
		}
		printf("i=%d\n", i);
	}
printf("%d\n", count);

	int i = 0;
	while (i <= 10) {
		i++;
		
		if (i % 2 == 0) {
			continue; //�ؿ� �������� �ʰ� �ٷ� while�� ���ư�
		}

		printf("i=%d\n", i);
	}

		


	printf("\nENTER�� ������ ����˴ϴ�\n");
	getchar();
	return 0;
} //end main()