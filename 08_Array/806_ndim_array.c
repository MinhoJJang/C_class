#include <stdio.h> //표준 입출력헤더 
#pragma warning(disable:4996) //scanf()등 ANSI C함수 에러 메세지 무시


/* 다차원 배열 (n-dimensional array)
*	배열 첨자(index)를
*	하나 사용하면 --> 1차원 배열
*	두개 사용하면 --> 2차원 배열
*	..
*/

int main() {

	//2차원 배열 선언
	int arr[4][3]; // 4 x 3, 4행 3열 
	//[4]-> 0,1,2,3
	//배열원소가 총 12개
	
	//초기화 //순서대로 읽는 형태
	arr[0][0] = 1; //뒤에서부터 올라감.. 
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

	//전부 0으로 초기화시키고싶으면..?

	int arr4[4][3] = { 0 }; //나머지원소들은 다 0으로 초기화됨
	printf("\n");

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%5d ", arr[i][j]);
		}
		printf("\n");
	}

	printf("\nENTER를 누르면 종료됩니다\n");
	getchar();
	return 0;
} //end main()