// desc: ���� ������ ������
// p223

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Person
{
private:
	char* name; // ������ ���� = �ּҸ� ����
	int age;

public:
	Person(const char* myname, int myage) // ��ü ���� �� stack�� Person ũ���� �޸� ���� �Ҵ�
	{
		int len = strlen(myname) + 1;
		name = new char[len]; // heap ������ ���ڿ� �迭 ����
		strcpy(name, myname); // data ������ myname �ּҰ� ����Ű�� �迭 ���� heap ������ name �迭�� ����
		age = myage;
	}

	void ShowPersonInfo() const
	{
		cout << "�̸�: " << name << endl;
		cout << "����: " << age << endl;
	}

	~Person()
	{
		delete[]name;
		cout << "called destructor!" << endl;
	}

};

int main(void)
{
	Person man1("Lee dong woo", 29); // 
	Person man2 = man1; // man1�� fild�� �״�� �����Ͽ� man2 ��ü ����
	// ��ü�� �ΰ� �����Ǿ����� �Ҹ��ڰ� �ѹ� ȣ�� => ���� ������ ����
	// man2�� �� ��� ���� ���� *name�� age �� 
	man1.ShowPersonInfo();
	man2.ShowPersonInfo();

	// man1 ��ü�� ��ȯ�Ǹ鼭 heap ������ name[] ���� �����.
	// ���� man2�� *name�� ����Ű�� heap ������ �����Ƿ� man2�� �Ҹ꿡 ������ �߻�
	// ���� ������ ������
	
	return 0;

}