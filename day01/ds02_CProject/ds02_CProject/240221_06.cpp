#include <iostream>
using namespace std;


int MathFunc(int a, int b, char c)
{
	int result = 0;

	if (c == '+')
		result = a + b;

	else if (c == '-')
		result = a - b;

	else if (c == '*')
		result = a * b;

	else if (c == '/')
		result = a / b;

	return result;
}


int main() {

	int a, b = 0;
	char c;
	
	cout << "정수 하나를 입력하세요 > ";
	cin >> a;
	cout << "정수 하나를 입력하세요 > ";
	cin >> b;


	cout << "연산 기호를 입력하세요 > ";
	cin >> c;

	// sol = 
	MathFunc(a, b, c);

	cout << "연산 결과: " << a << " " << c << " " << b << " = " << MathFunc(a, b, c);

	return 0;
}