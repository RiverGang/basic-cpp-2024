/*
문제1

두 숫자를 더한 값을 구하려 합니다.
표준 입력으로 숫자 두 개를 입력받아, 두 수의 합을 출력하도록 코드를 작성하세요
*/

#include <iostream>
using namespace std;

int main()
{
	int num1, num2; // 두 수는 1 이상 100 이하의 자연수

	cout << "두 수의 합을 출력합니다" << endl;
	cout << "첫번째 자연수 입력 >> ";
	cin >> num1;
	cout << "두번째 자연수 입력 >> ";
	cin >> num2;

	cout << "결과: " << num1 + num2;
	return 0;
}