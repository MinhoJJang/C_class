#include <stdio.h> //ǥ�� �������� 
#pragma warning(disable:4996) //scanf()�� ANSI C�Լ� ���� �޼��� ����


/* �迭�� ���ڿ�(string)
*	 - C��� ���� "���ڿ�" �� ��ü�� 'char [] �迭' �̴�
*	 - C����� "���ڿ�"��
*		  ���� '\0' (null ����) �� ������ 'char [] �迭' �̴�
*/


int main() {

	char str1[20] = "nice";
	printf("str1 = %s\n", str1); 
	// %s -> char�迭���� '\0' ���������� ���
	printf("str1[0] = %c\n", str1[0]);
	printf("str1[1] = %c\n", str1[1]);
	printf("str1[2] = %c\n", str1[2]);
	printf("str1[3] = %c\n", str1[3]);
	printf("str1[4] = %c\n", str1[4]);

	char str2[] = { 'n','i','c','e' ,'\0'}; 
	//null���� ���������� �����ϱ� �ι��ڸ� ���������
	printf("str2 = %s\n", str2);

	char str3[] = "nice"; //�ֵ���ǥ�� �ڿ� �ι��ڰ� �ִ� �迭��. 
	//�� str3�� ���̴� 5��
	printf("str3's length is %d\n", sizeof(str3));

	char *str4 = "nice"; //pointer 

	str1[0] = 'D';
	printf("str1 = %s\n", str1); //�߰��� ���� �ٲܼ�������

	str2[4] = '#';
	printf("str2 = %s\n", str2);


	printf("\nENTER�� ������ ����˴ϴ�\n");
	getchar();
	return 0;
} //end main()