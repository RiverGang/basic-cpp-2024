# include <iostream>
using namespace std;

class Number
{
private:
	int num;

public:
	Number(int n = 0) : num(n)
	{
		cout << "Number(int n=0)" << endl;
	}

	Number& operator=(const Number& ref)
	{
		cout << "operatpr = ()" << endl;
		num = ref.num;
		return *this;
	}

	void ShowNumber() { cout << num << endl; }
};

int main(void)
{
	Number num; // 객체생성
	num = 30; 
	// type이 다른 30(int 형)을 데이터 인자로 전달받는 class의 생성자를 호출해 임시 객체생성 (12행) -> 대입연산 진행 (15행) 
	num.ShowNumber();

	return 0;
}