// desc: 템플릿 함수와 일반 함수의 구분
// p532 

# include<iostream>
using namespace std;

template <typename T>
T Add(T num1, T num2)
{
	cout << "T Add(T num1, T num2)";
	return num1 + num2;
}

int Add(int num1, int num2)
{
	cout << "Add(int num1, int num2)" << endl;
	return num1 + num2;
}

double Add(double num1, double num2)
{
	cout << "Add(double num1, double num2)" << endl;
	return num1 + num2;
}


int main(void)
{
	cout << Add(5, 7) << endl; // int 일반 함수
	cout << Add(3.7, 7.5) << endl; // double 일반 함수
	cout << Add<int>(5, 7) << endl; // 템플릿 함수
	cout << Add<double>(3.7, 7.5) << endl;

	return 0;
}