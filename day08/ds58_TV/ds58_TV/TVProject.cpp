#include <iostream>
using namespace std;

class RemoteControl
{
public:
	virtual void on()
	{}
};

class SamsungTv : public RemoteControl
{
	void on()
	{
		cout << "�Ｚ TV on" << endl; // ������ ��⸶�� ������ �ʿ�
	}
};

class LgTv : public RemoteControl
{
	void on()
	{
		cout << "���� TV on" << endl; // ������ ��⸶�� ������ �ʿ�
	}
};

int main(void)
{
	RemoteControl* remote = new SamsungTv();
	remote->on();

	remote = new LgTv();
	remote->on();

	delete remote; 

	return 0;
}