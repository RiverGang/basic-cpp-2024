/*
	C++ Ŭ����: ����ü ����� ��� ������ ��� �Լ��� ������


# include <iostream>
using namespace std;

class human // class = ���� ������ �� �ٸ� �ڷ���(type)
{
public:

	// ����ü�� ��� ����
	char name[20];
	int age;
	char job[20];

	void showHuman() // ����ü ���� �Լ��̱⶧���� ����ü�� �ҷ��� �ʿ� ���� => ��� �Լ�
	{
		cout << "name: " << name << "age: " << age << "jop: " << job; // ����ü���� ���ǵ� ���� �״�� ���
	}

};


int main() {

	int a = 0;
	// human h1 = { "ȫ�浿", 50, "����" };
	// h1.showHuman();

	human h1 = { "ȫ�浿", 50, "����" }; //human�̶�� �ڷ���(=class)�� ���� h1
	h1.showHuman();

	return 0;
}*/
