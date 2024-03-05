// desc
// p407

#include <iostream>
using namespace std;

class Point
{
private:
	int xpos, ypos;

public:
	Point(int x=0, int y=0) : xpos(x), ypos(y)
	{}

	void ShowPosition() const
	{
		cout << '[' << xpos << ", " << ypos << ']' << endl;
	}

	friend Point operator+(const Point& pos1, const Point& pos2);
	// friend 선언을 통해 함수 내에서 Point 클래스의 private 멤버에 접근 가능
	// friend는 연산자오버로딩 때만 주로 이용
};

Point operator+(const Point& pos1, const Point& pos2) // 전역함수 형태
{
	Point pos(pos1.xpos + pos2.xpos, pos1.ypos + pos2.ypos);
	// 외부에서 private 값 xpos,ypos 사용하기 위해 friend 선언
	return pos;
}


int main(void)
{

	Point pos1(3, 4);
	Point pos2(10, 20);
	Point pos3 = pos1 + pos2; // 멤버함수 호출할 필요 X

	pos1.ShowPosition();
	pos2.ShowPosition();
	pos3.ShowPosition();

	return 0;
}
