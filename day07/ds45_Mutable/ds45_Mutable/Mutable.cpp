#include <iostream>
using namespace std;

class SoSimple
{
private:
	int num1;
	mutable int num2;

public:
	SoSimple(int n1, int n2)
		:num1(n1), num2(n2)
	{}

	void ShowSimpleData() const
	{
		cout << num1 << ", " << num2 << endl;

	}

	void CopyToNum2() const // �Լ��� constȭ => �Լ� ������ ���� ������ �Ͼ�� �ȵ�
	{
		num2 = num1; // But, num2�� mutable �����̱⿡ ����. 
		// 8���� mutable Ű���带 ���ָ� ���� �߻�
	}
};

int main(void)
{
	SoSimple sm(1, 2);
	sm.ShowSimpleData();
	sm.CopyToNum2();
	sm.ShowSimpleData();
	return 0;
}