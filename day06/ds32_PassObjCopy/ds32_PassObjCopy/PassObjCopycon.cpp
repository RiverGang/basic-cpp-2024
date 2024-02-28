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

	void ShowData() // 멤버함수 --> 객체 생성 후 사용가능.
	{
		cout << "num: " <<num<< endl;
	}
};

void SimpleFuncObj(SoSimple ob) // 전역 함수 (소속X)
// 함수의 입력이 객체 => 복사생성자 호출
{
	ob.ShowData();
}

int main(void)
{
	SoSimple obj(7); //obj 객체 생성
	cout << "함수호출 전" << endl;
	SimpleFuncObj(obj); // 객체가 입력인 함수 호출
	cout << "함수호출 후" << endl;
	return 0;
}