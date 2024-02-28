#include <iostream>
using namespace std;

class Point;

class PointOP
{
private:
	int opcnt;
public:
	PointOP() : opcnt(0)
	{}

	Point PointAdd(const Point&, const Point&); // 참조하는 매개변수의 이름이 없음
	Point PointSub(const Point&, const Point&); // 함수의 "선언부"에서 매개변수의 이름은 생략이 가능, But 매개변수 Type은 생략 불가
	
	~PointOP()
	{
		cout << "Operation times: " << opcnt << endl;
	}
};

class Point
{
private:
	int x;
	int y;

public:
	Point(const int &xpos, const int &ypos) : x(xpos), y(ypos)
	{}

	friend Point PointOP::PointAdd(const Point&, const Point&);
	friend Point PointOP::PointSub(const Point&, const Point&);
	friend void ShowPointPos(const Point&);

};

Point PointOP::PointAdd(const Point& pnt1, const Point& pnt2) // 함수 "정의부"에서는 매개변수 이름 생략불가
{
	opcnt++;
	return Point(pnt1.x + pnt2.x, pnt1.y + pnt2.y);
}

Point PointOP::PointSub(const Point& pnt1, const Point& pnt2)
{
	opcnt++;
	return Point(pnt1.x - pnt2.x, pnt1.y - pnt2.y);
}

int main(void)
{
	Point pos1(1, 2);
	Point pos2(2, 4);
	PointOP op;

	ShowPointPos(op.PointAdd(pos1, pos2));
	ShowPointPos(op.PointSub(pos1, pos2));
	return 0;

}

void ShowPointPos(const Point& pos)
{
	cout << "x: " << pos.x << ", ";
	cout << "y: " << pos.y << endl;
}


