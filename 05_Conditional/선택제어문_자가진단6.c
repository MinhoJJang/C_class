#include <stdio.h> // ǥ������� printf, scanf ...

#pragma warning(disable:4996) // scanf() �� ���� C�Լ� ���� ����

//���ڴ� 'M' ���ڴ� 'F'�� ��Ÿ����� �ϰ� 18�� �̻��� �����̶�� ����.
//
//
//����('M', 'F')�� ���̸� �Է¹޾� "MAN"(���γ���), "WOMAN"(���ο���), "BOY"(�̼��Ⳳ��), "GIRL"(�̼��⿩��)�� �����Ͽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

int main()
{
	char sex;
	int age;

	scanf("%c", &sex);
	scanf("%d", &age);
	getchar();

	if (age >= 18)
	{
		if (sex == 'M') //������!!!!! ���Կ�����-> = 
			printf("MAN");
		else if(sex == 'F')
			printf("WOMAN");
	}
	else  
	{
		if (sex == 'M')
			printf("BOY");
		else if (sex == 'F')
			printf("GIRL");
	}

	////�ٸ����.. &&(and) ���
	//printf("--------------------------------\n");

	//if (sex == 'M' && age >= 18) printf("MAN");

	//if (sex == 'M' && age < 18) printf("BOY");

	//if (sex == 'F' && age >= 18) printf("WOMAN");

	//if (sex == 'F' && age >= 18) printf("GIRL");


	getchar();
	return 0;
} // end main()