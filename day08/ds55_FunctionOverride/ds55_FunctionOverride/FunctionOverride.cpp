#include <iostream>
using namespace std;

class First
{
public:
	void MyFunc() { cout << "FirstFunc" << endl; }
};

class Second : public First
{
public:
	void MyFunc() { cout << "SecondFunc" << endl; }

};

class Third : public Second
{
public:
	void MyFunc() { cout << "ThirdFunc" << endl; }
};


int main(void)
{

	Third* tptr = new Third();
	Second* sptr = tptr;
	First* fptr = sptr;

	/*
	객체 포인터 타입을 기준으로 접근 범위 결정
	오버라이딩된 경우는 부모 것은 자식 것으로 가려진다 => 자식(본인)의 것이 호출
	부모의 함수를 불러오려면 범위스코프 "::"를 이용해 호출
	*/

	fptr->MyFunc();
	sptr->MyFunc();
	tptr->MyFunc();

	tptr->Second::MyFunc(); // Third가 Second 부모 함수에 접근 (범위지정)

	delete tptr;

	return 0;
}