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
	
	cout << "���� �ϳ��� �Է��ϼ��� > ";
	cin >> a;
	cout << "���� �ϳ��� �Է��ϼ��� > ";
	cin >> b;


	cout << "���� ��ȣ�� �Է��ϼ��� > ";
	cin >> c;

	// sol = 
	MathFunc(a, b, c);

	cout << "���� ���: " << a << " " << c << " " << b << " = " << MathFunc(a, b, c);

	return 0;
}