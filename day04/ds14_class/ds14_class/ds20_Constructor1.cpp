/*#include <iostream>
using namespace std;

class SimpleClass
{
private:
	int num1;
	int num2;

public: // 생성자 오버로딩
	SimpleClass()
	{
		num1 = 0;
		num2 = 0;
	}
	SimpleClass(int n)
	{
		num1 = n;
		num2 = 0;
	}
	SimpleClass(int n1, int n2)
	{
		num1 = n1;
		num2 = n2;
	}
	/*
	SimpleClass(int n1=0, int n2=0) // => defalt 매개변수, 입력 값이 없는 경우 0, 0으로 초기화 입력 값이 있으면 입력 값으로 초기화
	// 편리하지만 모호한 경우가 많이 발생하니 주의.
	{
		num1 = n1;
		num2 = n2;
	}
	
	
	void ShowData() const
	{
		cout << num1 << ' ' << num2 << endl;
	}
};

int main()
{
	SimpleClass sc1;
	sc1.ShowData();

	SimpleClass sc2(100);
	sc2.ShowData();

	SimpleClass sc3(100, 200);
	sc3.ShowData();
	return 0;
}
*/