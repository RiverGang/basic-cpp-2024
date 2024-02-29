#include <iostream>
#include <cstring>
using namespace std;

class Person
{
private:
	int age;
	char name[50];

public:
	Person(int myage, const char* myname){

		cout << "�θ� ������ ����" << endl;
		age = myage;
		strcpy(name, myname);
	}

	void WhatYouName() const {
		cout << "My nmae is " << name << endl;
	}

	void HowOldAreYou() const {
		cout << "I'm " << age << " years old" << endl;
	}
};





class UnivStudent : public Person // Person Ŭ������ ���
// ��� ���� -> ':' �������� ��ӹ��� Ŭ������
{

private:
	char major[50];

public:
	UnivStudent(const char* myname, int myage, const char *mymajor) : Person(myage, myname) // �θ� ������ ȣ��
	{	
		cout << "�ڽ� ������ ����" << endl;
		strcpy(major, mymajor);
	}

	void whoAreYou() const {

		WhatYouName(); // Person Ŭ������ ����߱⿡, UnivStudent class�� ����Լ��� �ƴϴ��� ȣ�� ����
		HowOldAreYou();
		cout << "My major is " << major << endl << endl;
	}
};





int main()
{
	UnivStudent ustd1("Lee", 22, "Computer eng.");
	// �ڽ� ��ü ����
	// 1. �ڽ� ��ü ���� ȣ�� 2. �θ� ������ ���� 3. �ڽ� ������ ���� 4. 
	ustd1.whoAreYou();

	UnivStudent ustd2("Yoon", 21, "Electronic eng.");
	ustd2.whoAreYou();


	return 0;
}