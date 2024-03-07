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
		cout << "operator=()" << endl;
		num = ref.num;
		return *this;
	}

	operator int() // 반환'형'이 없는데 반환이 됨
		// 함수이름 : operator
		// 출력부분 : X (없음)
		// int 형으로 반환해야 하는 상황에서 호출
	{
		return num;
	}

	void ShowNumber() { cout << num << endl; }
};

int main(void)
{
	Number num1;
	num1 = 30;
	Number num2 = num1 + 20;
	num2.ShowNumber();
	
	return 0;
}