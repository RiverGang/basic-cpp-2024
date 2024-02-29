# include <iostream>
using namespace std;

class Person
{
private:
	char* name;
	int age;
public:
	Person(const char* myname, int myage) : age(myage)
	{
		int len = strlen(myname)+1;
		name = new char[len];
		strcpy(name, myname);
	}

	Person(const Person& copy) : age(copy.age)
	{
		name = new char[strlen(copy.name) + 1];
		strcpy(name, copy.name);
	}

	void PersonInfo()
	{
		cout << "이름: " << name << endl;
		cout << "나이: " << age << endl;
		cout << "주소: " << this << endl << endl;
	}
};

int main(void)
{
	Person p("이성희", 25);
	p.PersonInfo();

	Person copyp(p);
	copyp.PersonInfo();

	delete[]

	return 0;
}

