#include <iostream>
using namespace std;

class PermanentWorker
{
private:
	char name[100];
	int salary;

public:
	PermanentWorker(const char* name, int money) 
		: salary(money)
	{
		strcpy(this->name, name);
	}

	int GetPay() const
	{
		return salary;
	}

	void ShowSalaryInfo() const
	{
		cout << "name: " << name << endl;
		cout << "salary: " << GetPay() << endl << endl;
	}
};


class EmployeeHandler
{
private:
	PermanentWorker* empList[50]; // 객체포인터 배열
	int empNum;

public:
	EmployeeHandler(): empNum(0)
	{ }


	void AddEmployee(PermanentWorker* emp) // empList 배열에 정규직 객체의 주소를 받아서 넣는다
	{
		empList[empNum++] = emp; // 후위대입연산자, 값을 넣고 수 증가. => 0,1,2
	}


	void ShowAllSalaryInfo() const
	{
		for (int i = 0; i < empNum; i++)
			empList[i]->ShowSalaryInfo(); // empList 배열의 요소값(객체 주소)을 통해서 멤버함수에 접근
		// 연산자 '->'
	}
	
	void ShowTotalSalary() const
	{
		int sum = 0;
		
		for (int i = 0; i < empNum; i++)
			sum += empList[i]-> GetPay();
		cout << "salary sum: " << sum << endl;

	}

	~EmployeeHandler()
	{
		for (int i = 0; i < empNum; i++)
			delete empList[i];
	}
}; 

int main(void)
{
	// 직원관리를 목적으로 설계된 컨트롤 클래스의 객체생성
	EmployeeHandler handler;

	// 직원 등록
	handler.AddEmployee(new PermanentWorker("KIM", 1000)); // new -> heap 영역에 할당
	handler.AddEmployee(new PermanentWorker("LEE", 1000));
	handler.AddEmployee(new PermanentWorker("JUN", 1000));

	handler.ShowAllSalaryInfo();
	handler.ShowTotalSalary();

	return 0;
}