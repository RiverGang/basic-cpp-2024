#include <iostream>
using namespace std;

template <typename T> //template에 대한 샘플 인수 제공
T Add(T num1, T num2)
{
	return num1 + num2;
}

/*int main(void)
{
	cout << Add<int>(15, 20) << endl;
	cout << Add<double>(2.9, 3.7) << endl;
	cout << Add<int>(3.2, 3.2) << endl;
	cout << Add<double>(3.14, 2.75) << endl;

	return 0;
} */

int main(void) // < >안 자료형을 명시적으로 적지 않아도(생략해도), 실행되면서 입력에 맞는 자료형 적용
{
	cout << Add(15, 20) << endl;
	cout << Add(2.9, 3.7) << endl;
	cout << Add(3.2, 3.2) << endl;
	cout << Add(3.14, 2.75) << endl;

	return 0;
}