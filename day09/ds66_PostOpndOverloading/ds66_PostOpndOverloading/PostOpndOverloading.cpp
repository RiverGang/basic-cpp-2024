#include <iostream>
using namespace std;

class Point
{
private:
	int xpos, ypos;

public:
	Point(int x = 0, int y = 0) : xpos(x), ypos(y)
	{}

	void ShowPosition() const
	{
		cout << '[' << xpos << ", " << ypos << ']' << endl;
	}

	Point& operator++() // 전위증가 -> 증가하고 던져준다
	{
		xpos += 1;
		ypos += 1;
		return *this;
	}

	const Point operator++(int) //후위증가 0> 던져주고 증가
	{
		const Point retobj(xpos, ypos);		// 현재의 객체를 복사하여 현재의 속성값을 유지
		xpos += 1;
		ypos += 1;
		// 현재 객체의 속성 값을 1씩 증가
		return retobj;
	}

	friend Point& operator--(Point& ref);
	friend const Point operator--(Point& ref, int);
 };

Point& operator--(Point &ref) // 전위감소 
{
	ref.xpos -= 1;
	ref.ypos += 1;
	return ref;
}

const Point operator--(Point& ref, int) // 후위감소
{
	const Point retobj(ref); // const 객체
	ref.xpos -= 1;
	ref.ypos -= 1;
	return retobj;
}


int main(void)
{
	Point pos(3, 5);
	Point cpy;
	cpy = pos--;
	cpy.ShowPosition();
	pos.ShowPosition();


	cpy = pos++;
	cpy.ShowPosition();
	pos.ShowPosition();

	return 0;
}