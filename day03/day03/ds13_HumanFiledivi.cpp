# include <iostream>
# include "ds13_HumanFiledivi.h"
using namespace std;

human::human(const char hname, int hage, const char hjob)
{
	const char name = hname;
	int age = hage;
	const char job = hjob;
	
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