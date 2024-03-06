#include <iostream>
using namespace std;

class Point
{
private:
	int xpos, ypos;

public:
	Point(int x=0, int y=0) : xpos(x), ypos(y) { }
	friend ostream& operator<<(ostream& os, const Point& pos);

	void* operator new (size_t size) // new 연산자 오버로딩
	{
		cout << "operator new : " << size << endl; // size 8 출력 => 컴파일러가 자동으로 크기 설정
		void* adr = new char[size]; // 8byte type으로 크기 할당, 주소값 리턴
		return adr; // 리턴된 주소값을 adr 포인터 변수에 저장해서 사용
	}

	void operator delete (void* adr)
	{
		cout << "operator delete ()" << endl;
		delete[]adr;
	}
};

ostream& operator<<(ostream& os, const Point& pos)
{
	os << '[' << pos.xpos << ", " << pos.ypos << ']' << endl;
	return os;
}


int main(void)
{
	Point* ptr = new Point(3, 4); // new 연산자로 포인터 type 객체 생성
	cout << *ptr; // 참조 연산자 * => ptr이 가리키는 값을 나타냄 (29행)
	delete ptr;

	return 0;
}