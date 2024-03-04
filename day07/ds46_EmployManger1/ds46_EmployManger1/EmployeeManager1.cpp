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
	PermanentWorker* empList[50]; // ��ü������ �迭
	int empNum;

public:
	EmployeeHandler(): empNum(0)
	{ }


	void AddEmployee(PermanentWorker* emp) // empList �迭�� ������ ��ü�� �ּҸ� �޾Ƽ� �ִ´�
	{
		empList[empNum++] = emp; // �������Կ�����, ���� �ְ� �� ����. => 0,1,2
	}


	void ShowAllSalaryInfo() const
	{
		for (int i = 0; i < empNum; i++)
			empList[i]->ShowSalaryInfo(); // empList �迭�� ��Ұ�(��ü �ּ�)�� ���ؼ� ����Լ��� ����
		// ������ '->'
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
	// ���������� �������� ����� ��Ʈ�� Ŭ������ ��ü����
	EmployeeHandler handler;

	// ���� ���
	handler.AddEmployee(new PermanentWorker("KIM", 1000)); // new -> heap ������ �Ҵ�
	handler.AddEmployee(new PermanentWorker("LEE", 1000));
	handler.AddEmployee(new PermanentWorker("JUN", 1000));

	handler.ShowAllSalaryInfo();
	handler.ShowTotalSalary();

	return 0;
}