# include <iostream>
using namespace std;

class Point
{
private:
	int xpos, ypos;

public:
	Point(int x=0, int y=0) : xpos(x), ypos(y) { }

	Point operator+(const Point& pos) const
	{
		return Point(xpos + pos.xpos, ypos + pos.ypos);
	}
	friend ostream& operator<<(ostream& os, const Point& pos);
};

ostream& operator<<(ostream& os, const Point& pos) // 객체를 출력하는 형태
{
	os << '[' << pos.xpos << ", " << pos.ypos << ']' << endl;
	return os;
}


class Adder
{
public:
	int operator()(const int& n1, const int& n2) // 객체의 함수화(연산자 오버로딩의 한 종류)
	{
		return n1 + n2;
	}

	double operator()(const double& e1, const double& e2)
	{
		return e1 + e2;
	}

	Point operator()(const Point& pos1, const Point& pos2)
	{
		return pos1 + pos2; // 객체 + 객체 형태 => 연산자 오버로딩 (12행)
	}
};


int main(void)
{
	Adder adder;
	cout << adder(1, 3) << endl; // 정수형 더하기 
	cout << adder(1.5, 3.7) << endl; // 실수형 더하기
	cout << adder(Point(3, 4), Point(7, 9));
	return 0;
}