#include <stdio.h> //ǥ�� �������� 
#include <string.h>
#pragma warning(disable:4996) //scanf()�� ANSI C�Լ� ���� �޼��� ����

// person ����ü ����
struct person {
	char name[20]; //�̸�
	int age;				//����
	double weight;	//������
};

// typedef �� ���ǵ� Ÿ�Ը����� ��� ����.
typedef struct person PS; 
//struct person�� PS�� �θ��ڴ� ��� �ǹ�

typedef struct _person {
	char name[20]; 
	int age;				
	double weight;	
} Person; 
//�� ����ü�� Person���� �θ��ڴٰ� �ٷ� ���� 

char *fmt = "�̸�:%s, ����:%d, ������:%.1f\n";

//����ü�� �Ű������� �޴� �Լ�
void printPerson(Person p) { 
	// ȣ��� ����ü ���� �߻�(32����Ʈ person�� ����..? ����)
	printf(fmt, p.name, p.age, p.weight);
}

//����ü �Ű������� ����ü�� �ּ�(������)�� �޴°� ����
void printPerson2(Person *p) { //*p�� �����ʹϱ� 4����Ʈ ����
	printf(fmt, p->name, p->age, p->weight);


}


int main() {

	PS p1;
	Person p2;
	Person p3 = { "��Ű", 100, 90.44 };

	//����ü�� size 
	printf("sizeof(Person) = %d\n", sizeof(Person));
	// 32 <--  �ϴ� ����� �´´�..

	//����ü�� ���� ������
	Person *ptr = &p3; //�����ʹ� ������ 4byte

	printf(fmt, p3.name, p3.age, p3.weight);
	printf(fmt, (*ptr).name, (*ptr).age, (*ptr).weight);
	printf(fmt, ptr->name, ptr->age, ptr->weight);

	// ����ü �迭
	Person people[3];

	people[0].age = 10;
	people[0].weight = 3.4;
	strcpy(people[0].name, "��ũ");

	people[1].age = 21;
	people[1].weight = 58.6;
	strcpy(people[1].name, "��ȣ��");

	people[2].age = 26;
	people[2].weight = 45;
	strcpy(people[2].name, "����");

	for (int i = 0; i < 3; i++) {
		printf(fmt, people[i].name, people[i].age, people[i].weight);
	}

	// people -> �迭 People[] type
	// people[i] -> People
	// people[i].age -> int type

	printf("\n");

	for (int i = 0; i < 3; i++) {
		printPerson(people[i]); // ȣ��� �Ű����� ����(32byte)
	}

	for (int i = 0; i < 3; i++) {
		printPerson2(people+i); // ȣ��� �Ű����� ����(4byte)
	}


	printf("\nENTER�� ������ ����˴ϴ�\n");
	getchar();
	return 0;
} //end main()