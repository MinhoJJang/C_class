#include <stdio.h> // ǥ������� printf, scanf ...
#pragma warning(disable:4996) // scanf() �� ���� C�Լ� ���� ����

/* �������� + 100 - Ű���� �񸸼�ġ �����̶�� ����.


Ű�� �����Ը� �ڿ����� �Է¹޾� ù ��° �ٿ� �񸸼�ġ�� ����ϰ�, �񸸼�ġ�� 0���� ũ�� �����ٿ� ��("Obesity")�̶�� �޽����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. (��������� �Ʒ� ��� ���� �����ϼ���.
*/

int main()
{
	int height; 
	int weight;

	//printf("Ű�� �Է��ϼ���\n");
	scanf("%d", &height);

	//printf("�����Ը� �Է��ϼ���\n");
	scanf("%d", &weight);
	getchar();

	int obesity = weight + 100 - height;

	printf("%d\n", obesity);
	if (obesity > 0)
		printf("Obesity");

	
	getchar();
	return 0;
} // end main()