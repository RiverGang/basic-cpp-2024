# include <iostream>
using namespace std;

class Point
{
private:
	int x, y;

public:
	Point (int xpos, int ypos ) : x(xpos), y(ypos)
	{ }

	void viewPoint()
	{
		cout << '[' << x << ", " << y << ']' << endl;
	}

	friend Point operator+(const Point& pos1, const Point& pos2);
	friend Point operator+(const Point& ref, int num);
	friend Point operator+(int num, const Point& ref);
	
	Point & operator<< ()
};
Point operator+(const Point& pos1, const Point& pos2)
{
	Point pos(pos1.x + pos2.x, pos1.y + pos2.y);
	return pos;
}

Point operator+(const Point& ref, int num)
{
	Point total(ref.x + num, ref.y + num);
	return total;
}

Point operator+(int num, const Point& ref)
{
	return ref+ num;
}

int main(void)
{
	Point a(10, 20);
	Point b(30, 40);
	Point c = a + b;
	Point d = a + 100;
	Point e = 100 + a;

	c.viewPoint();
	d.viewPoint();
	e.viewPoint();

	cout<<c<<

	return 0;
}