#include <stdio.h> //ǥ�� �������� 
#pragma warning(disable:4996) //scanf()�� ANSI C�Լ� ���� �޼��� ����

/*

*/

int main() {

	printf("��Ʈ ������ bit operator\n");

	//& : AND 
	//| : OR
	//^ : XOR
	//~ : NOT
	//<<, >> : SHIFT 

	int num1 = 120, num2 = 26;
	int result;


	// AND ������ (&)
	// �� �� 1�̾�� 1, �������� 0
	result = num1 & num2;
	printf("%d & %d = %d\n", num1, num2, result); // 24
	//why? 
	// 0111 1000 (120)
	// 0001 1010 (26)
	// ------------   &
	// 0001 1000 (24)
	// �Ѵ� 1�̾�� 1��. ���״�� and�ϱ� �Ѵ� 1�̾���� 


	// OR ������ (|)
	// �� �� 0�̾�� 0, �������� 1 
	result = num1 | num2;
	printf("%d | %d = %d\n", num1, num2, result); // 122
	//why? 
	// 0111 1000 (120)
	// 0001 1010 (26)
	// ------------    |
	// 0111 1010 (122)


	// XOR ������ (^) (eXclusive OR : ��Ÿ�� ������)
	// ������ 0, �ٸ��� 1
	result = num1 ^ num2;
	printf("%d ^ %d = %d\n", num1, num2, result); // 98
	//why? 
	// 0111 1000 (120)
	// 0001 1010 (26)
	// ------------   ^
	// 0110 0010 (98)

	// ~ : NOT ��Ʈ������ 
	// ��Ʈ ���� 1-> 0
	result = ~num1;
	printf("~%d = %d\n", num1, result); //-121

	//~X = -(X+1)
	/*
	0000 0000 0000 0000 0000 0000 0111 1000 (120)
	��������������������������������������������������������������������  ~
	(1)111 1111 1111 1111 1111 1111 1000 0111 (-121)
	�� ���� ��Ʈ�� (1) �̸� ������  
	*/

	// <<, >>  shift ������
	// bit ���� �̵�
	num1 = 10;
	result = num1 << 2; //��Ʈ���� �������� 2�ڸ� �̵�
	printf("result = %d\n", result); //40

	// 0000 1010 (10)
	// << 2ĭ SHIFT
	// 0010 1000 (40) = 10 * {2^2(ĭ)}

	// Nĭ << SHIFT =  NUM * (2^N)

	num1 = 10;
	result = num1 >> 1; //��Ʈ���� ���������� 1�ڸ� �̵�
	printf("result = %d\n", result); //5

	// �ܼ��� 2�� ������ ���ϸ� *���꺸�� <<, >>���� �ӵ��� ������ ����.

	result = num1 * 2; // �ð� 20��~30�� 
	result = num1 << 1; //�ð� 1�� 





	printf("\nENTER�� ������ ����˴ϴ�\n");
	getchar();
	return 0;
} //end main()