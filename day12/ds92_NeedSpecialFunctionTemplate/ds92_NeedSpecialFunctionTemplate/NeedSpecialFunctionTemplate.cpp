// desc: 함수 템플릿의 특수화(Specialization)
// p 536

# include <iostream>
using namespace std;

template <typename T>
T Max(T a, T b)
{
	return a > b ? a : b;
	// 인자로 전달된 두 데이트 중 큰 값을 반환

}

int main(void)
{
	cout << Max(11, 15) << endl;
	cout << Max('T', 'Q') << endl;
	cout << Max(3.5, 7.5) << endl;
	cout << Max("Simple", "Best") << endl; // 문자열의 주소 값 비교결과가 반환
	// 목적에 부합하는 리턴 결과가 아님


	return 0;
}