#include <stdio.h> //ǥ�� �������� 
#pragma warning(disable:4996) //scanf()�� ANSI C�Լ� ���� �޼��� ����

/*

*/

int main() {

	int num1 = 10;
	int* p = NULL; //int �� ����Ű�� ������, �ʱⰪ�� null(�ƹ� �ּҵ� ����Ű�� �ʴ� ��, 0)

	int* *pp = NULL; //int* �� ����Ű�� ������ 
	//??? pp�� *�� �ѹ� �����ϰ� �� �����Ѱ��� �ٽ� *�� ������ 

	p = &num1;
	pp = &p; //������ p�� �ּҸ� ���� pp

	printf("%d %p %p\n", num1, p, pp);
	printf("%p %p\n", &p, pp);
	printf("%d %d %d\n", num1, *p, **pp);

	printf("\nENTER�� ������ ����˴ϴ�\n");
	getchar();
	return 0;
} //end main()