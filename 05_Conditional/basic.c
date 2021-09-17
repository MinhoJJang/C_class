#include <stdio.h> //표준 입출력헤더 
#pragma warning(disable:4996) //scanf()등 ANSI C함수 에러 메세지 무시

/*
1   2   4   7   11
3   5   8   12
6   9   13
10 14
15


X번째 수.. 1+2+...+n<=X< 1+2+...+(n+1)
X에서 수를 빼면서.?
*/

int main() {

	int X;
	int count = 0;
	printf("숫자를 입력하세요");
	scanf("%d", &X);
	getchar();

	int sum = 0;
	int n;

	for (n=1; ; n++)
	{
		sum += n;
		if (X - sum > 0)
		{
			count++;
			continue;
		}
		else if (X - sum <= 0)
		{
			break;
		}
	}
	printf("%d\n", count);
	printf("%d\n", sum-n);

	int mom = X - (sum - n);
	printf("%d\n", mom);

	printf("%d/%d", n + mom - 1, n - mom + 1);
	//printf("%d/%d", )
	




	printf("\nENTER를 누르면 종료됩니다\n");
	getchar();
	return 0;
} //end main()