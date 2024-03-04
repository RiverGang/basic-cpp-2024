# include <iostream>
using namespace std;

class Base {
public:
	Base() {};
	~Base() {};

	virtual void func1() { cout << "Base::func1()" << endl; }
	virtual void func2() { cout << "Base::func2()" << endl; }
	void func3() { cout << "Base::func3()" << endl; }
};

class Derived : public Base
{
public:
	void func1() { cout << "Derived::func1()" << endl; } //재정의
	void func3() { cout << "Derived::func2()" << endl; } //재정의
	void func4() { cout << "Derived::func3()" << endl; }
};
int main()
{
	Base b; // Base type의 객체변수
	Derived d; // Derived type의 객체변수

	Base* pb = new Derived(); // Base type의 객체 포인터

	pb->func1();
	pb->func2();
	pb->func3();

	/*
	만약,
	virtual (가상함수)를 처리해주지 않으면(9,10행) 포인터의 type을 따라가 접근 -> Base
	
	[출력]
	Base::func1()
	Base::func2()
	Base::func3()
	*/

	delete pb;

	return 0;
}