# include <iostream>
# include <cstring>
using namespace std;

class Computer
{
private:
	char owner[50];

public:
	Computer(const char* name)
	{
		strcpy(owner, name);
	}

	void Calculate()
	{
		cout << "요청 내용을 계산합니다." << endl;
	}
};

class NotebookComp : public Computer
{
private:
	int Battery;

public:
	NotebookComp(const char * name, int initChag)
		: Computer(name), Battery(initChag)
	{ }

	void Charging() { Battery += 5; }
	void UseBattery() { Battery -= 1; }
	void MovingCal()
	{
		if (GetBatteryInfo() < 1)
		{
			cout << "충전이 필요합니다." << endl;
			return;
		}
		cout << "이동하면서 ";
		Calculate();
		UseBattery();
	}

	int GetBatteryInfo() { return Battery; }

};


class TabletNoteBook : public NotebookComp
{
private:
	char regstPenMode[50];
	
public:
	TabletNoteBook(const char* name, int initChag, const char* pen)
		: NotebookComp(name, initChag)
	{
		strcpy(regstPenMode, pen);
	}

	void Write(const char* penInfo)
	{
		if(GetBatteryInfo()<1)
		{
			cout << "충전이 필요합니다." << endl;
			return;
		}

		if (strcmp(regstPenMode, penInfo) != 0)
		{
			cout << "등록된 펜이 아닙니다.";
			return;
		}

		cout << "필기 내용을 처리합니다." << endl;
		UseBattery();
	}

};



int main()
{
	NotebookComp nc("이수종", 5);
	TabletNoteBook tn("정수영", 5, "ISE-241-242");
	nc.MovingCal();
	tn.Write("ISE-241-242");

	return 0;
}