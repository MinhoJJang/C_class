#include <stdio.h> //ǥ�� �������� 
#pragma warning(disable:4996) //scanf()�� ANSI C�Լ� ���� �޼��� ����

/*
1. ��ó�� ���� ��
2. ���ڰ� ���ٸ� ���ڼ� ��
3. ���ڼ��� ���ٸ� �ι�° ���� �� 
4. �ι�°���ڵ� ������ ����°���� ��
5. ���...
*/

int main() {

	/*char word1[10];
	char word2[10];
	char word3[10];

	scanf("%s", word1);
	scanf("%s", word2);
	scanf("%s", word3);*/

	char szInput[100]; // string with zero. \0���� �����¹��ڿ��̶�� ��
	char szFirst[100];

	for (int i = 0; i < 3; i++) {
		scanf("%s", szInput);

		if (i == 0 || 
			(i > 0 && (strcmp(szFirst, szInput) > 0))) { 
			//���� First ���� �ռ� �ܾ���..
			strcpy(szFirst, szInput);
		}
	}
	printf("%s\n", szFirst); 

	printf("\nENTER�� ������ ����˴ϴ�\n");
	getchar();
	return 0;
} //end main()