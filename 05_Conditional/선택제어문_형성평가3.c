#include <stdio.h> 
#pragma warning(disable:4996) 

//�⵵�� �Է¹޾� ����(leap year)���� ���(common year)���� �Ǵ��ϴ� ���α׷��� �ۼ��Ͻÿ�.

//400���� ����������� �����̴�.�Ǵ� 4�� ����������� 100���� ����������� ������ �����̴�.�������� ��� ����̴�.


int main()
{
	int year;
	scanf("%d", &year);
	getchar();

	if (year % 400 == 0)
		printf("leap year");
	else if (year % 100 == 0)
		printf("common year");
	else if (year % 4 == 0)
		printf("leap year");
	else 
		printf("common year");


	getchar();
	return 0;
}