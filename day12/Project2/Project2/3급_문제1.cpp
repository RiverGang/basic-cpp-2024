#include <iostream>
using namespace std;

int main()
{
	int num1, num2;

	cout << "두 수의 합을 출력합니다" << endl;
	cout << "첫번째 자연수 입력 >> ";
	cin >> num1;
	cout << "두번째 자연수 입력 >> ";
	cin >> num2;

	cout << "결과: " << num1 + num2;
	return 0;
}