#include <iostream>
using namespace std;

class First
{
public:
	virtual void MyFunc() { cout << "FirstFunc" << endl; }
};

// 동적바인딩
// 프로그램이 실행될 때가 아닌(시작과 동시에가 아닌), 프로그램이 실행되는 도중에 함수 호출 대상이 결정되는 것

class Second: public First
{
public:
	virtual void MyFunc() { cout << "SecondFunc" << endl; }
};



class Third : public Second
{
public:
	virtual void MyFunc() { cout << "ThirdFunc" << endl; }
};

int main(void)
{
	Third* tptr = new Third(); // Third type의 객체 생성
	Second* sptr = tptr;
	First* fptr = sptr;

	fptr->MyFunc(); // 포인터의 자료형을 기반으로 한 호출이 아닌, 포인터 변수가 실제로 가리키는 객체를 참조하여 호출&출력
	sptr->MyFunc();
	tptr->MyFunc();
	
	delete tptr;
	return 0;
}