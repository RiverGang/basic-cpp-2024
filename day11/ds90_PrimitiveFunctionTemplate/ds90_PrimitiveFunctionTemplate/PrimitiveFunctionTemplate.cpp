// desc: 둘 이상의 형(Type)에 대한 템플릿 선언
// p533

# include <iostream>
using namespace std;

template <class T1, class T2>
void ShowData(double num)
{
	cout << (T1)num << ", " << (T2)num << endl;
	// 인자로 전달된 num 값을 T1과 T2로 명시되는 자료형으로 형 변환해서 출력
}

int main(void)
{
	ShowData<char, int>(65); // num = 65, T1 type = char, T2 type = int
	ShowData<char, int>(67);
	ShowData<char, double>(68.9);
	ShowData<char, double>(69.2);
	ShowData<short, double>(70.4);

	return 0;
}