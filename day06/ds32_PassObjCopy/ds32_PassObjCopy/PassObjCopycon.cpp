#include <iostream>
using namespace std;

class SoSimple
{
private:
	int num;
public:
	SoSimple(int n): num(n)
	{}
	SoSimple(const SoSimple& copy) : num(copy.num)
	{
		cout << "Called SoSimple(const SoSimple& copy)" << endl;
	}

	void ShowData() // ����Լ� --> ��ü ���� �� ��밡��.
	{
		cout << "num: " <<num<< endl;
	}
};

void SimpleFuncObj(SoSimple ob) // ���� �Լ� (�Ҽ�X)
// �Լ��� �Է��� ��ü => ��������� ȣ��
{
	ob.ShowData();
}

int main(void)
{
	SoSimple obj(7); //obj ��ü ����
	cout << "�Լ�ȣ�� ��" << endl;
	SimpleFuncObj(obj); // ��ü�� �Է��� �Լ� ȣ��
	cout << "�Լ�ȣ�� ��" << endl;
	return 0;
}