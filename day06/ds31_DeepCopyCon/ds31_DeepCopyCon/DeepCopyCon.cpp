// desc: 깊은 복사 형태
// p225

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

	Person(const Person& copy) : age(copy.age) //age는 필드 그대로 복사
	{
		name = new char[strlen(copy.name) + 1]; // 객체 복사 시, heap 영역에 새로운 메모리 공간 할당
		strcpy(name, copy.name); // 새로운 공간에 동일한 값의 문자열 값 복사
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
	Person man2 = man1;
	man1.ShowPersonInfo();
	man2.ShowPersonInfo();

	return 0;

}