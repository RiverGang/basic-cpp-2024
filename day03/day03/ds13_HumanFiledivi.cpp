# include <iostream>
# include "ds13_HumanFiledivi.h"
using namespace std;

human::human(char hname, int hage, char hjob)
{
	char name = hname;
	int age = hage;
	char job = hjob;
	
}

void human:: humaninfo() // ����ü ���� �Լ��̱⶧���� ����ü�� �ҷ��� �ʿ� ���� => ��� �Լ�
{
	cout << "���� " << age << "���� " << job << " " << name << "�Դϴ�."; 
}

int main()
{
	human h("�̼���", 25, "�л�");
	
	h.humaninfo();

	return 0;
}