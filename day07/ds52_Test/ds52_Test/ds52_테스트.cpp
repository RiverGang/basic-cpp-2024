# include <iostream>
using namespace std;

class Myclass 
{
private:
	char name[30];
	int age;

public:
	
	Myclass(const char* myname, int myage)
		: age(myage)
	{
		strcpy(name, myname);
	}

	char * showName()
	{
		return name;
	}

	int showAge()
	{
		return age;
	}
};

class MyInfo : public Myclass
{
private:
	char pNumber[20];

public:

	MyInfo(const char* myname, int myage, const char* mypNum)
		: Myclass(myname, myage) // 부모클래스의 생성자를 호출하여 초기화
	{
		strcpy(pNumber, mypNum);
	}

	void printMyInfo() {

		cout << "나의 이름은 " << showName() << "이고 나이는 " << showAge() << "살이며 전화번호는 " << pNumber << "입니다.";
	}
};

int main()
{
	MyInfo human("이성희", 25, "010-5886-0903");
	human.printMyInfo();

	return 0;
}