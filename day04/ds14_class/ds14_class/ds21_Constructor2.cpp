/*# include <iostream>
using namespace std;

class SimpleClass
{
private:
	int num1;
	int num2;

public:
	SimpleClass(int n1 = 0, int n2 = 0)
	{
		num1 = n1;
		num2 = n2;
	}
	
	void ShowData() const
	{
		cout << num1 << ' ' << num2 << endl;
	}
};

int main(void)
{
	SimpleClass sc1(); //34행에 있는 함수를 호출
	SimpleClass mysc = sc1();
	mysc.ShowData();

	return 0;
}

SimpleClass sc1()
{
	SimpleClass sc(20, 30); // 객체 생성
	return sc; // 객체 리턴

}*/