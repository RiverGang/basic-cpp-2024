#include <iostream>
using namespace std;

class Add 
{
private:
	int x, y;

public:
	Add(int ax = 0, int ay = 0) : x(ax), y(ay)
	{
		cout << "Operator" << endl;
	}

	Add operator+(const Add& other)
	{
		return Add(x + other.x, other.y);
	}

	void showPoint()
	{
		cout << '[' << x << ", " << y << ']' <<endl;
	}

};