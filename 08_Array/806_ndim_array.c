#include <stdio.h> //ǥ�� �������� 
#pragma warning(disable:4996) //scanf()�� ANSI C�Լ� ���� �޼��� ����


/* ������ �迭 (n-dimensional array)
*	�迭 ÷��(index)��
*	�ϳ� ����ϸ� --> 1���� �迭
*	�ΰ� ����ϸ� --> 2���� �迭
*	..
*/

int main() {

	//2���� �迭 ����
	int arr[4][3]; // 4 x 3, 4�� 3�� 
	//[4]-> 0,1,2,3
	//�迭���Ұ� �� 12��
	
	//�ʱ�ȭ //������� �д� ����
	arr[0][0] = 1; //�ڿ������� �ö�.. 
	arr[0][1] = 2;
	arr[0][2] = 3; 

	arr[1][0] = 4;
	arr[1][1] = 5;
	arr[1][2] = 6;

	arr[2][0] = 7;
	arr[2][1] = 8;
	arr[2][2] = 9;

	arr[3][0] = 10;
	arr[3][1] = 11;
	arr[3][2] = 12;


	int  arr2[4][3] = 
	{
		{1,2,3},
		{4,5,6}, //5= [1][1]
		{7,8,9}, //9= [2][2]
		{10,11,12} //10= [3][0]
	};


	int arr3[4][3] = { 1,2,3,4,5,6,7,8,9,10,11,12 };

	printf("arr2[2][2] = %d\n", arr2[2][2]); //9
	printf("arr2[3][1] = %d\n", arr2[3][1]); //11

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			printf("arr[%d][%d] = %d\n", i, j, arr3[i][j]);
		}
	}

	printf("\n");

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%5d ",arr[i][j]);
		}
		printf("\n");
	}

	//���� 0���� �ʱ�ȭ��Ű�������..?

	int arr4[4][3] = { 0 }; //���������ҵ��� �� 0���� �ʱ�ȭ��
	printf("\n");

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%5d ", arr[i][j]);
		}
		printf("\n");
	}

	printf("\nENTER�� ������ ����˴ϴ�\n");
	getchar();
	return 0;
} //end main()