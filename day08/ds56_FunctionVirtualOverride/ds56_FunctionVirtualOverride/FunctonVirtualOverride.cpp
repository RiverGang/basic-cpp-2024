#include <iostream>
using namespace std;

class First
{
public:
	virtual void MyFunc() { cout << "FirstFunc" << endl; }
};

// �������ε�
// ���α׷��� ����� ���� �ƴ�(���۰� ���ÿ��� �ƴ�), ���α׷��� ����Ǵ� ���߿� �Լ� ȣ�� ����� �����Ǵ� ��

class Second: public First
{
public:
	virtual void MyFunc() { cout << "SecondFunc" << endl; }
};



class Third : public Second
{
public:
	virtual void MyFunc() { cout << "ThirdFunc" << endl; }
};

int main(void)
{
	Third* tptr = new Third(); // Third type�� ��ü ����
	Second* sptr = tptr;
	First* fptr = sptr;

	fptr->MyFunc(); // �������� �ڷ����� ������� �� ȣ���� �ƴ�, ������ ������ ������ ����Ű�� ��ü�� �����Ͽ� ȣ��&���
	sptr->MyFunc();
	tptr->MyFunc();
	
	delete tptr;
	return 0;
}