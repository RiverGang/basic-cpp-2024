//desc: 가상 소멸자
// p358

#include <iostream>
using namespace std;

class First
{
private:
	char* strOne;

public:
	First(const char* str)
	{
		strOne = new char[strlen(str) + 1];
	}

	virtual ~First() // 가상 소멸자
	{
		cout << "~First()" << endl;
		delete[]strOne;
	}
};

class Second : public First
{
private:
	char* strTwo;

public:
	Second(const char* str1, const char* str2) : First(str1)
	{
		strTwo = new char[strlen(str2) + 1];
	}

	virtual ~Second()
	{
		cout << "~Second()" << endl;
		delete[]strTwo;
	}
};


int main(void)
{
	First* ptr = new Second("simple", "complex"); // 객체 포인터 type이 중심이기에, 부모 소멸자만 호출.
	// 소멸자 앞에 virtual 키워드 붙일 시, 둘다 삭제 됨
	delete ptr;


	/*
		상속관계에 있어서 객체포인터는 조심해야한다
		부모타입의 객체 포인터로 자식 객체를 가리키는 경우 (=다형성) 조심하기!!!!!
	*/
	return 0;
}