// desc: 반환할 때 만들어진 임시객체
// p235

#include <iostream>
using namespace std;

class Temporary
{
private:
	int num;
public:
	Temporary(int n) : num(n)
	{
		cout << "create obj: " << num << endl;
	}

	~Temporary()
	{
		cout << "destroy obj: " << num << endl;
	}

	void ShowTempInfo()
	{
		cout << "My num is " << num << endl;
	}
};

int main(void)
{
	Temporary(100); // Temporary t(100), 객체의 이름이 없는 형태 => 임시객체로 생성
	cout << "********* after make!" << endl << endl;

	Temporary(200).ShowTempInfo();
	cout << "********* after make!" << endl << endl;

	const Temporary &ref=Temporary(300); // 본래 임시객체는 참조가 불가능하지만, 상수화(const)를 시켜주면 참조 가능
	cout << "********* end of main!" << endl << endl;
	return 0;
}