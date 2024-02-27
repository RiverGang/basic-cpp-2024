/*
# include <iostream>
# include <cstring>
using namespace std;

class Person
{
private:
	char* name;
	int age;

public: // 생성자 오버로딩
	Person(const char* myname, int myage) // 생성자
	{
		int len = strlen(myname) + 1;  
		name = new char[len]; // 동적 할당
		strcpy(name, myname); 
		age = myage;
	}

	Person() // defalt 생성자
	{
		name = NULL;
		age = 0;
		cout << "called Person()"<<endl;
	}

	void SetPersonInfo(char* myname, int myage)
	{
		name = myname;
		age = myage;
	}
	
	void ShowPersonInfo() const
	{
		cout << "이름: " << name << ", ";
		cout << "나이: " << age << endl;

	}

	~Person()
	{
		delete[]name; // 동적할당 소멸
		cout << "called destructor" << endl;
	}
};

int main(void)
{
	Person parr[3]; // 객체 배열
	char namestr[100]; // 문자 배열
	char * strptr; // char type 포인터변수
	int age;
	int len;

	for (int i = 0; i < 3; i++)
	{
		cout << "이름: ";
		cin >> namestr;
		cout << "나이: ";
		cin >> age;

		len = strlen(namestr) + 1;
		strptr = new char[len];
		strcpy(strptr, namestr);
		parr[i].SetPersonInfo(strptr, age);
	}
	parr[0].ShowPersonInfo();
	parr[1].ShowPersonInfo();
	parr[2].ShowPersonInfo();

	return 0;
}*/