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

	void CopyToNum2() const // 함수의 const화 => 함수 내에서 값의 변경이 일어나면 안됨
	{
		num2 = num1; // But, num2는 mutable 상태이기에 가능. 
		// 8행의 mutable 키워드를 없애면 에러 발생
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