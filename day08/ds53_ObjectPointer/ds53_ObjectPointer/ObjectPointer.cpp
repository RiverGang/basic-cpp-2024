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
	// ������ ��ü �������� Ÿ���� ������
	// Person Ÿ���� ������ ptr1�� Student Ÿ���� ��ü�� ����Ű����, Person�� Sleep()�� ����Ѵ�("Sleep")
	 
	ptr2->Sleep();
	ptr3->Study();

	delete ptr1;
	delete ptr2;
	delete ptr3;
	return 0;
}