# include <iostream>
# include <cstdlib>
using namespace std;

class BoundCheckIntArray
{
private:
	int* arr;
	int arrlen;

public:
	BoundCheckIntArray(int len) : arrlen(len)
	{
		arr = new int[len];
	}

	int& operator[] (int idx)
	{
		if (idx < 0 || idx >= arrlen)
		{
			cout << "Array index out of bound exception" << endl;
			BoundCheckIntArray::~BoundCheckIntArray(); // 예외가 발생하여 강제 종료 전, 메모리 공간 반납
			exit(1); // 프로그램 종료
		}
		return arr[idx];
	}

	~BoundCheckIntArray()
	{
		delete[]arr;
	}
};


int main(void)
{
	BoundCheckIntArray arr(5);
	for (int i = 0; i < 5; i++)
		arr[i] = (i + 1) * 11;

	for (int i = 0; i < 6; i++)
		cout << arr[i] << endl;
	
	return 0;
}