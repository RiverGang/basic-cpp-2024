# include <iostream>
using namespace std;

/*class Person
{
private:
	char* name;
	int age;

public:
	Person(const char* myname, int myage) // �Է� 2���� ���� ������, 
	{
		int len = strlen(myname) + 1; // strlen(): ���ڿ� ���̸� ���ϴ� �Լ�, 
		// +1 ���ϱ� : �迭 �� �� Null���� �ٿ� �ش� �迭�� ���ڿ����� �˸�.
		name = new char[len]; // heap ������ len ũ���� �޸𸮸� �Ҵ� �޾� name �ּ� ����
		cout << "char�� ũ��: " << sizeof(char) << endl;
		strcpy(name, myname); // ���ڿ� ���� strcpy(), "���� ����(heap)"�� ����� ���ڿ� �̸� name �� "Lee dong Woo"+Null ���ڿ�
		age = myage;
	}

	void ShowPersonInfo() const
	{
		cout << "�̸�: " << name << endl;
		cout << "����: " << age << endl;

	}

	~Person() // �Ҹ��� => ��ü ���� ��, ȣ������ �ʾƵ� �ڵ����� ����
	{
		delete[]name;
		cout << "called destructor!" << endl;
	}
};

int main(void)
{
	Person man1("Lee dong Woo", 29); // "���� ����"�� ����� �̸� man1 �� "Lee dong Woo" ���ڿ�
	Person man2("Jang dong gun", 41);
	man1.ShowPersonInfo();
	man2.ShowPersonInfo();
	return 0;
}
*/