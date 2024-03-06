// desc: 연산자 오버로딩 교환법칙 성립 구현
// p427

#include <iostream>
using namespace std;

class Point
{
private:
	int xpos, ypos;

public:
	Point(int x=0, int y=0) : xpos(x), ypos(y)
	{ }

	void ShowPosition() const
	{
		cout << '[' << xpos << ", " << ypos << ']' << endl;
	}

	Point operator*(int times)
	{
		Point pos(xpos * times, ypos * times);
		return pos;
	}

	friend Point operator*(int times, Point& ref); 
};

Point operator*(int times, Point& ref) 
// 정수 * 참조 순서 입력
// 전역함수
{
	return ref * times;
	// return 값의 형태가 21행 operator 함수와 같음 -> 실행
}

int main(void)
{
	Point pos(1, 2);
	Point cpy;

	cpy = 3 * pos;
	cpy.ShowPosition();

	cpy = 2 * pos * 3;
	cpy.ShowPosition();

	return 0;
}