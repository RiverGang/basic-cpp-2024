# include <iostream>
using namespace std;

class Number
{
private:
	int num;

public:
	Number(int n) : num(n) { }
	void ShowData() { cout << num << endl; }

	Number* operator->()
	{
		return this;
	}

	Number& operator *()
	{
		return *this;
	}
};

int main(void)
{
	Number num(20);
	num.ShowData();

	(*num) = 30; // 18행 실행, 자기 자신을 리턴하여 값 대입. num이 포인터 type이 됨
	num->ShowData();
	(*num).ShowData();
	return 0;
}