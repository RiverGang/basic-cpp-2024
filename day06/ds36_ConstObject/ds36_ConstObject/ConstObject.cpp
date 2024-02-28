// desc: const 객체와 const 객체의 특성들
// p244

#include <iostream>
using namespace std;

class SoSimple
{
private:
	int num;
public:
	SoSimple(int n) : num(n)
	{}

	SoSimple& AddNum(int n)
	{
		num += n; // 값이 변경
		return *this;
	}

	void ShowData() const // 함수 자체가 값을 변경시키지 않지만, const를 뒤에 붙임으로써 변경할 소지도 차단.
	{
		cout << "num: " << num << endl; // 값이 변경될 소지 없음
	}
};

int main(void)
{
	const SoSimple obj(7); // 객체를 상수화(const)
	//obj.AddNum(20);
	obj.ShowData();

	return 0;
}