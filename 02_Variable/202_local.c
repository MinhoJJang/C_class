#include <stdio.h>


int Year = 2021; // �������� Year 

int main()  {

	//��-> {///}
	//global scope �� ���� ���� -> �������� 

	printf("Year = %d\n", Year);

	int grade = 4; 


	{
		int a = 100; //��������ÿ� �ʱ�ȭ���� & �������� 
		printf("a = %d\n", a);
		//����Ⱥ������� ��밡���� ��������  
		printf("grade = %d\n", grade);
		int Year = 1988;
	}

	int age = 32;
	{
		int age = 60; // �������ȳ�? 
		printf("age = %d\n", age); //60
	}
	printf("age = %d\n", age); //32

	getchar();
	return 0;
}