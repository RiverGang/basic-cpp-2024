# include <iostream>
using namespace std;

class Myclass 
{
private:
	char name[30];
	int age;

public:
	
	Myclass(const char* myname, int myage)
		: age(myage)
	{
		strcpy(name, myname);
	}

	char * showName()
	{
		return name;
	}

	int showAge()
	{
		return age;
	}
};

class MyInfo : public Myclass
{
private:
	char pNumber[20];

public:

	MyInfo(const char* myname, int myage, const char* mypNum)
		: Myclass(myname, myage) // �θ�Ŭ������ �����ڸ� ȣ���Ͽ� �ʱ�ȭ
	{
		strcpy(pNumber, mypNum);
	}

	void printMyInfo() {

		cout << "���� �̸��� " << showName() << "�̰� ���̴� " << showAge() << "���̸� ��ȭ��ȣ�� " << pNumber << "�Դϴ�.";
	}
};

int main()
{
	MyInfo human("�̼���", 25, "010-5886-0903");
	human.printMyInfo();

	return 0;
}