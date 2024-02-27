/*#include <iostream>
using namespace std;

class AAA
{
private:
	int num;
public:
	AAA() : num(0) {}
	
	~AAA() {}; // 소멸자, 클래스 이름 앞 '~'(물결표)를 붙임

	AAA& CreateInitObj(int n) const
	{
		AAA* ptr = new AAA(n);
		return *ptr;
	}
	
	void ShowNum() const { cout << num << endl; }

private:
	AAA(int n) : num(n) {} // private에 정의되어 있는 생성자 = 싱글톤(singleton), 외부에서 객체 생성을 막음, class 내부에서 객체를 생성해 전달해주어야함
	// 객체 생성을 하나만 할 때 사용, 메모리 절약
};

int main(void)
{
	AAA base;
	base.ShowNum();

	AAA& obj1 = base.CreateInitObj(3); // AAA type의 참조변수(&) obj1 선언 = 참조형태로 받는 10행 실행, 12행 new 연산자를 통해 AAA(n)의 새로운 객체 heap 영역 할당, 
	//AAA type의 주소를 통해 heap 영역 접근, 입력 값이 하나인 오버로딩 생성자 실행(19행) n으로 값 초기화
	obj1.ShowNum();

	AAA& obj2 = base.CreateInitObj(12);
	obj2.ShowNum();

	delete &obj1;
	delete& obj2;
	return 0;
}*/