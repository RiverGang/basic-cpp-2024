#include <iostream>
#include <cstring>
using namespace std;

class Person
{
private:
	int age;
	char name[50];

public:
	Person(int myage, const char* myname){

		cout << "부모 생성자 실행" << endl;
		age = myage;
		strcpy(name, myname);
	}

	void WhatYouName() const {
		cout << "My nmae is " << name << endl;
	}

	void HowOldAreYou() const {
		cout << "I'm " << age << " years old" << endl;
	}
};





class UnivStudent : public Person // Person 클래스의 상속
// 상속 문법 -> ':' 접근제한 상속받을 클래스명
{

private:
	char major[50];

public:
	UnivStudent(const char* myname, int myage, const char *mymajor) : Person(myage, myname) // 부모 생성자 호출
	{	
		cout << "자식 생성자 실행" << endl;
		strcpy(major, mymajor);
	}

	void whoAreYou() const {

		WhatYouName(); // Person 클래스를 상속했기에, UnivStudent class의 멤버함수가 아니더라도 호출 가능
		HowOldAreYou();
		cout << "My major is " << major << endl << endl;
	}
};





int main()
{
	UnivStudent ustd1("Lee", 22, "Computer eng.");
	// 자식 객체 생성
	// 1. 자식 객체 생성 호출 2. 부모 생성자 실행 3. 자식 생성자 실행 4. 
	ustd1.whoAreYou();

	UnivStudent ustd2("Yoon", 21, "Electronic eng.");
	ustd2.whoAreYou();


	return 0;
}