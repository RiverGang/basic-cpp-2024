/*#include <iostream>
using namespace std;


class MyClass
{
	int num;

public:
	MyClass() // defalt 생성자 => 입력을 가지지 않는 생성자
	{
	cout << "생성자 호출: MyClass()" << endl;
	num = 10;
	}
	MyClass(int anum)
	{
	cout << "생성자 호출: MyClass(int)" << endl;
	num = anum;
	}

	void MyClassinfo() {
	cout << "num: " << MyClass::num << endl;
	}
};



int main()
{
	MyClass m1;
	m1.MyClassinfo();
	MyClass m2(20);
	m2.MyClassinfo();

	return 0;
}
*/