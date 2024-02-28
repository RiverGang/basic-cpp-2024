// desc: 얕은 복사의 문제점
// p223

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Person
{
private:
	char* name; // 포인터 변수 = 주소를 가짐
	int age;

public:
	Person(const char* myname, int myage) // 객체 생성 시 stack에 Person 크기의 메모리 공간 할당
	{
		int len = strlen(myname) + 1;
		name = new char[len]; // heap 영역에 문자열 배열 생성
		strcpy(name, myname); // data 영역의 myname 주소가 가리키는 배열 값을 heap 영역의 name 배열에 복사
		age = myage;
	}

	void ShowPersonInfo() const
	{
		cout << "이름: " << name << endl;
		cout << "나이: " << age << endl;
	}

	~Person()
	{
		delete[]name;
		cout << "called destructor!" << endl;
	}

};

int main(void)
{
	Person man1("Lee dong woo", 29); // 
	Person man2 = man1; // man1의 fild를 그대로 복사하여 man2 객체 생성
	// 객체가 두개 생성되었지만 소멸자가 한번 호출 => 무언가 문제가 있음
	// man2의 각 멤버 변수 또한 *name과 age 값 
	man1.ShowPersonInfo();
	man2.ShowPersonInfo();

	// man1 객체가 반환되면서 heap 영역의 name[] 값도 사라짐.
	// 이후 man2의 *name이 가리키는 heap 공간이 없으므로 man2의 소멸에 문제가 발생
	// 얕은 복사의 문제점
	
	return 0;

}