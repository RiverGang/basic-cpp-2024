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

	Point operator+(const Point& ref)
		//출력 Point type, 함수이름 operator+, 입력 참조형태(-> 따라서 const)
	{
		Point pos(xpos + ref.xpos, ypos + ref.ypos);
		// 두 객체의 입력 값을 더해 새로운 객체 생성
		// 내가 만든 자료형(=Point)은 연산 기능이 기본으로 구현되어있지 않음
		// 기본 자료형이 할 수 있는 연산 기능을 따로 정의해줌
		
		return pos;
	}

};


int main(void)
{
	Point pos1(3, 4);
	Point pos2(10, 20);
	Point pos3 = pos1.operator+(pos2);
	// pos1이 멤버함수 호출, pos2 입력
	// 임시객체 pos 생성, pos3에 복사하여 pos3 생성

	pos1.ShowPosition();
	pos2.ShowPosition();
	pos3.ShowPosition();


	Point pos4 = pos2.operator+(pos3);
	pos4.ShowPosition();

	return 0;
}