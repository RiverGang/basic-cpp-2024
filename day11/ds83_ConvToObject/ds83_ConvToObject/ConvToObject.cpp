# include <iostream>
using namespace std;

class Number
{
private:
	int num;

public:
	Number(int n = 0) : num(n)
	{
		cout << "Number(int n=0)" << endl;
	}

	Number& operator=(const Number& ref)
	{
		cout << "operatpr = ()" << endl;
		num = ref.num;
		return *this;
	}

	void ShowNumber() { cout << num << endl; }
};

int main(void)
{
	Number num; // ��ü����
	num = 30; 
	// type�� �ٸ� 30(int ��)�� ������ ���ڷ� ���޹޴� class�� �����ڸ� ȣ���� �ӽ� ��ü���� (12��) -> ���Կ��� ���� (15��) 
	num.ShowNumber();

	return 0;
}