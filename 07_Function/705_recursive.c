#include <stdio.h> //표준 입출력헤더 
#pragma warning(disable:4996) //scanf()등 ANSI C함수 에러 메세지 무시

/*
*	재귀호출 (Recursive Call)
*	- 함수가 실행중에 자신을 다시 호출하는 것.
*   - 복잡한 문제를 단순화하여 구현하는 장점
*	- 무한한 재귀호출은 불가
*/

int func1(int n)
{
	printf("func1(%d) 호출 \n", n);
	return func1(n + 1);
}

// 4! = 4 x 3 x 2 x 1
// n! = n x (n - 1) x (n - 2) x ...  x 1
// n! = n x (n - 1)!
//             ↓
//           n - 1  x (n - 2)!
//											... 0!
//  0! = 1




int factorial(int n) {

	if (n == 0) return 1;
	else {
		return n * factorial(n - 1);
	}
}

int main() {

	//func1(1);
	//프로그램이 죽음..왜?
	//메모리가 꽉차면 죽음.
	//재귀호출을 무한히 하려 하면 프로그램 강제 종료됨.

	int n = 5;
	printf("%d! = %d\n", n, factorial(n));

	printf("\nENTER를 누르면 종료됩니다\n");
	getchar();
	return 0;
} //end main()