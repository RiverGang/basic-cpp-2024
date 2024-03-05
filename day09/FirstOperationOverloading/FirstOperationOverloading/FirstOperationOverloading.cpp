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
		//��� Point type, �Լ��̸� operator+, �Է� ��������(-> ���� const)
	{
		Point pos(xpos + ref.xpos, ypos + ref.ypos);
		// �� ��ü�� �Է� ���� ���� ���ο� ��ü ����
		// ���� ���� �ڷ���(=Point)�� ���� ����� �⺻���� �����Ǿ����� ����
		// �⺻ �ڷ����� �� �� �ִ� ���� ����� ���� ��������
		
		return pos;
	}

};


int main(void)
{
	Point pos1(3, 4);
	Point pos2(10, 20);
	Point pos3 = pos1.operator+(pos2);
	// pos1�� ����Լ� ȣ��, pos2 �Է�
	// �ӽð�ü pos ����, pos3�� �����Ͽ� pos3 ����

	pos1.ShowPosition();
	pos2.ShowPosition();
	pos3.ShowPosition();


	Point pos4 = pos2.operator+(pos3);
	pos4.ShowPosition();

	return 0;
}