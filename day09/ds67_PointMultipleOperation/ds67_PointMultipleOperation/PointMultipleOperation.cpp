// desc: 자료형이 다른 두 피연산자의 연산
// p425 

# include <iostream>
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

	Point operator*(int times) // 연산자 오버로딩
	{
		Point pos(xpos * times, ypos * times); // x와 y 속성 각각에 전달받은 정수형 곱하기
		return pos;
	}
};


int main(int)
{
	Point pos(1, 2);
	Point cpy;

	cpy = pos * 3; // Point type의 pos와 int type의 3을 곱하기 => 서로 다른 type의 연산
	cpy.ShowPosition();

	cpy = pos * 3 * 2;
	cpy.ShowPosition();

	return 0;
}