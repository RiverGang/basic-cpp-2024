//desc: ���� �Ҹ���
// p358

#include <iostream>
using namespace std;

class First
{
private:
	char* strOne;

public:
	First(const char* str)
	{
		strOne = new char[strlen(str) + 1];
	}

	virtual ~First() // ���� �Ҹ���
	{
		cout << "~First()" << endl;
		delete[]strOne;
	}
};

class Second : public First
{
private:
	char* strTwo;

public:
	Second(const char* str1, const char* str2) : First(str1)
	{
		strTwo = new char[strlen(str2) + 1];
	}

	virtual ~Second()
	{
		cout << "~Second()" << endl;
		delete[]strTwo;
	}
};


int main(void)
{
	First* ptr = new Second("simple", "complex"); // ��ü ������ type�� �߽��̱⿡, �θ� �Ҹ��ڸ� ȣ��.
	// �Ҹ��� �տ� virtual Ű���� ���� ��, �Ѵ� ���� ��
	delete ptr;


	/*
		��Ӱ��迡 �־ ��ü�����ʹ� �����ؾ��Ѵ�
		�θ�Ÿ���� ��ü �����ͷ� �ڽ� ��ü�� ����Ű�� ��� (=������) �����ϱ�!!!!!
	*/
	return 0;
}