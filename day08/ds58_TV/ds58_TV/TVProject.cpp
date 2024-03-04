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
		cout << "삼성 TV on" << endl; // 각각의 기기마다 재정의 필요
	}
};

class LgTv : public RemoteControl
{
	void on()
	{
		cout << "엘지 TV on" << endl; // 각각의 기기마다 재정의 필요
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