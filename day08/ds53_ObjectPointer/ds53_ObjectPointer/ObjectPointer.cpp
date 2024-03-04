# include <iostream>
using namespace std;

class Person
{
public:
	void Sleep() { cout << "Sleep" << endl; }

};

class Student : public Person
{
public:
	void Study() { cout << "Study" << endl; }
	void Sleep() { cout << "Sleep Student" << endl; }
};

class PartTimeStudent : public Student
{
public:
	void Work() { cout << "Work" << endl; }
};

int main(void)
{
	Person* ptr1 = new Student();
	Person* ptr2 = new PartTimeStudent();
	Student* ptr3 = new PartTimeStudent();

	ptr1->Sleep(); 
	// 접근은 객체 포인터의 타입을 따른다
	// Person 타입의 포인터 ptr1은 Student 타입의 객체를 가리키지만, Person의 Sleep()을 출력한다("Sleep")
	 
	ptr2->Sleep();
	ptr3->Study();

	delete ptr1;
	delete ptr2;
	delete ptr3;
	return 0;
}