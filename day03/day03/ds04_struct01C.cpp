/* 
CŸ���� ����ü
#include <stdio.h>

typedef struct human {
	char name[20];
	int age;
	char job[20];
}Human;


void showHuman(human h) 
{
	printf("name: $s age: %d job: $s\n", h.name, h.age, h.job);
}
int main()
{
	int a = 10;
	human h1 = { "ȫ�浿", 50, "����" }; //Human Ÿ���� ������ �����ϰ� �ʱ�ȭ
	showHuman(h1);
	return 0;
}*/