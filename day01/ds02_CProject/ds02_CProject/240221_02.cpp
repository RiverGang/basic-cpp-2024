/*
	선택제어문: switch

#include <iostream>

using namespace std;

int main()
{
	int inKey;
	cout << "숫자입력: ";
	cin >> inKey;

	switch (inKey) {

	case 1:
		cout << "1입니다." << endl;
		break;

	case 2:
		cout << "2입니다." << endl;
		// break; => case 3번까지 실행됨

	case 3:
		cout << "3입니다." << endl;
		break;

	default:
		cout << "이것도 저것도 아닙니다" << endl;
	}

	return 0;
}
*/