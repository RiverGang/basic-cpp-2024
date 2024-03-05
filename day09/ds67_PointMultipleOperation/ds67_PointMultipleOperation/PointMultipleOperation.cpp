// desc: �ڷ����� �ٸ� �� �ǿ������� ����
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

	Point operator*(int times) // ������ �����ε�
	{
		Point pos(xpos * times, ypos * times); // x�� y �Ӽ� ������ ���޹��� ������ ���ϱ�
		return pos;
	}
};


int main(int)
{
	Point pos(1, 2);
	Point cpy;

	cpy = pos * 3; // Point type�� pos�� int type�� 3�� ���ϱ� => ���� �ٸ� type�� ����
	cpy.ShowPosition();

	cpy = pos * 3 * 2;
	cpy.ShowPosition();

	return 0;
}