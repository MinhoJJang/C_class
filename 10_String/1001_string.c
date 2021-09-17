#include <stdio.h> //ǥ�� �������� 
#include <string.h>
#pragma warning(disable:4996) //scanf()�� ANSI C�Լ� ���� �޼��� ����

/*
*	1. ���ڿ��� ����(������ ����)�� ��ȯ
*		strlen(���ڿ�������);
*		strlen(���ڹ迭);
*
*	2. ���ڿ� �� ����� ��ȯ
*		strcmp(���ڿ�1, ���ڿ�2);
*		int strcmp(char const *_Str1, char const *_Str2);
*
*		-1: ASCII �ڵ� �������� ���ڿ�2(s2)�� Ŭ ��
*		0: ASCII �ڵ� �������� �� ���ڿ��� ���� ��
*		1: ASCII �ڵ� �������� ���ڿ�1(s1)�� Ŭ ��
*
*	3. ���ڿ� ����
*		strcpy(����ڿ�, �������ڿ�);
*		char *strcpy(char *_Dest, char const *_Source);
*		����ڿ��� �����͸� ��ȯ
*
*	4. ���ڿ� ���̱�
*		strcat(�������ڿ�, ���Ϲ��ڿ�);
*		char *strcat(char *_Destination, char const *_Source);
*		���� ���ڿ��� �����͸� ��ȯ
*
*	5. ���ڿ� �ȿ��� '����'�� �˻�
*		strchr(����ڿ�, �˻��ҹ���);
*		char *strchr(char * const _String, int const _Ch);
*		���ڸ� ã������ ���ڷ� �����ϴ� ���ڿ��� �����͸� ��ȯ, ���ڰ� ������ NULL�� ��ȯ
*
*	6. ���ڿ� �ȿ��� '���ڿ�'�� �˻�
*		strstr(����ڿ�, �˻��ҹ��ڿ�);
*		char *strstr(char * const _String, char const * const _SubString);
*		���ڿ��� ã������ ���ڿ��� �����ϴ� ���ڿ��� �����͸� ��ȯ, ���ڿ��� ������ NULL�� ��ȯ
*
*  7. ���ڿ� ��ҹ��� ��ȯ
*		strupr(����ڿ�)  : �־��� ����ڿ��� ���� �빮�ڷ� ��ȯ
*		strlwr(����ڿ�)  : �־��� ����ڿ��� ���� �ҹ��ڷ� ��ȯ
*       �������ڿ� ��ȭ�� (����!)
*/

/*���ڿ� = string

1. ���ڿ�����
string + length = strlen

2. ���ڿ� �񱳰��
string + compare = strcmp

3. ���ڿ� ����
string + copy = strcpy

4. ���ڿ� ���̱�
string + concatenate(�����Ű��) = strcat

5. ���ڿ� �ȿ��� '����' �˻�
string + character = strchr

6. ���ڿ� �ȿ��� '���ڿ�' �� �˻�
string + string = strstr

7. ���ڿ� ��ҹ��� ��ȯ
string + upper / lower = strupr / strlwr
*/



int main() {

	char *s1 = "Hello"; 
	// s1�����Ϳ��� "Hello" ���ڿ��ּ� ����
	char s2[10] = "Hello"; 
	// ���� 10�� char�� �迭�� ������ ���ڿ� �Ҵ�
	//������ ���ڿ� ������ \0�� ����ִ�. �� ���� ��, �� ���ڿ��� 6�ڸ���

	//���ڿ��� ���� strlen() 
	{
		printf("%d\n", strlen(s1)); //5
		printf("%d\n", strlen(s2)); //5 
	}

	//���ڿ� �� strcmp()
	{
		int ret = strcmp(s1, s2); // �� ���ڿ� ������ 0����
		printf("%d\n", ret);

		if (strcmp(s1, s2)) {
			printf("%s�� %s�� �ٸ��ϴ�\n", s1, s2);
		}
		else {
			printf("%s�� %s�� �����ϴ�\n", s1, s2);
		}

		// "aaa" => 97 97 97
		// "aab" => 97 97 98
		// A = 65
		// 1 0 -1

		printf("%d\n", strcmp("aaa", "aaa")); //0
		printf("%d\n", strcmp("aab", "aaa")); //1
		printf("%d\n", strcmp("aab", "aac")); //-1
		printf("%d\n", strcmp("aAaA", "AaAa")); //1

		printf("a = %d\nA = %d\n", 'a', 'A'); 
	}

	//���ڿ� ���� strcpy()
	{
		char s1[10] = "Hello";
		char s2[10];

		printf("strcpy() �� s2 = %s\n", s2); //strange thing...

		strcpy(s2, s1); //s2���� s1�� ������
		//s1 = H e l l o \0 \0 \0 \0 \0
		// ------------------�״��
		//s1 = H e l l o \0   

		printf("strcpy() �� s2 = %s\n", s2); //Hello

	}
	{
		//���� 
		char *s1 = "Hello";
		char *s2 = "";			
		//���ڿ� ���ͷ��� �б� ���� ������ ����(������ ���׸�Ʈ)�� ������

		// strcpy(s2, s1); // �б����� ������ ���� �Ұ� 
		printf("%s\n", s2); 
	}

	//���ڿ� ���̱� strcat() string concatenation
	{
		char s1[10] = "world";
		char s2[20] = "Hello"; //���� ���ڿ��� ������ �˳���
		printf("strcat() �� s2 = %s\n", s2); //Hello

		strcat(s2, s1); //s2�� s1�� �ٿ��� 
					//s1 = w o r l d \0 ...
		// ----------------------------------------�״��
		//s1 = H e l l o w o r l d \0   

		printf("strcat() �� s2 = %s\n", s2); //Helloworld
	}

	//���ڿ� �ȿ��� ���ڷ� �˻� strchr()
	{
		char s1[30] = "bargain, car, park";
		// = "A Garden Diary"

		
		char *ptr = strchr(s1, 'a'); //���ڿ� s1���� ���� 'a'�˻�. ã����ġ�� �ּҸ� ����
		printf("%d\n", strlen(s1));

		if (ptr) {
			printf("%d��°���� ã�Ҵ�\n", ptr - s1); //s1�� ��ó�� A(0��°)�� ����Ŵ. //3
		}
		else {
			printf("����");
		}

		printf("ptr = %s\n", ptr); //arden Diary
		//a�� ã�� ��ġ���� ���ڿ��� ����ϴϱ�.

		while (ptr != NULL) {
			printf("%d ��°���� �߰� %s\n", ptr - s1, ptr);
			ptr = strchr(ptr + 1, 'a'); //charŸ�� ptr ���� 1ĭ �ں��� ã�°�
		}
	}

	// ���ڿ� �ȿ��� '���ڿ�' �� �˻� strstr()
	{
		char s1[30] = "A Garden Diary";

		char *ptr = strstr(s1, "den");

		if (ptr) {
			printf("strstr() �߰� %d��°, %s\n", ptr - s1, ptr);
		}
		else {
			printf("strstr() �߰� ����\n");
		}
	}

	//���ڿ� ��ҹ��� ��ȯ strupr(), strlwr() [upper, lower]
	{
		char s1[30] = "A Garden Diary";
		printf("strupr() => %s, s1 => %s\n", strupr(s1), s1);
		// �ᱹ str~�� �������̹Ƿ� ������ȭ�� ����
		printf("strlwr() => %s, s1 => %s\n", strlwr(s1), s1);
	}



	printf("\nENTER�� ������ ����˴ϴ�\n");
	getchar();
	return 0;
} //end main()