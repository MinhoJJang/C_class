#include <stdio.h> // ǥ������� printf, scanf ...
#pragma warning(disable:4996) // scanf() �� ���� C�Լ� ���� ����

/* ���̸� �Է¹޾� 20�� �̻��̸� "adult"��� ����ϰ� �׷��� ������ �� ���Ŀ� ������ �Ǵ����� "�� years later"��� �޽����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
*/

int main()
{
	int age = 0;
	scanf("%d", &age);
	getchar();

	if (age >= 20) {
		printf("adult");
	}
	else {
		printf("%d years later", 20-age);
	}

	getchar();
	return 0;
} // end main()