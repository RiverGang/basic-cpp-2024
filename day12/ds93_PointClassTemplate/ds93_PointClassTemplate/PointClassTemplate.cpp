//desc: 클래스 템플릿
// p541

#include <iostream>
using namespace std;

template <typename T>
class Point
{
private:
	T xops, ypos;

public:
	Point(T x = 0, T y = 0);

	void ShowPosition() const;
};

template <typename T> //T에 대해 템플릿화 된 SimpleTemplate 클래스 템플릿. 클래스 외부에서 정의할 때 반드시 추가 
Point<T>::Point(T x, T y) : xpos(x), ypos(y)
{ }


template <typename T>
void Point<T>:: ShowPosition() const
{
	cout << '[' << xpos << ", " << ypos << ']' << endl;
}


int main(void)
{
	Point<int> pos1(3, 4);
	pos1.ShowPosition();

	Point<double> pos2(2.4, 3.6);
	pos2.ShowPosition();

	Point<char> pos3('P', 'F'); // 좌표정보를 문자로 표현하는 상황 표현
	pos3.ShowPosition();

	return 0;
}