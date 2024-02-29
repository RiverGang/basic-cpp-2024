// desc: static 멤버변수, 클래스 변수
// p258

# include <iostream>
using namespace std;

class SoSimple
{

private:
	static int simObjCnt; // 클래스 변수 선언: static + type + 변수명

public:
	SoSimple()
	{
		simObjCnt++;
		cout << simObjCnt << "번째 SoSimple 객체" << endl;
	}
};
int SoSimple::simObjCnt = 0; // 클래스 변수 초기화: type + 클래스명 :: 변수명 = 초기화
// 메모리 공간에 저장될 때 0으로 초기화하라는 뜻
// 클래스의 생성자에 초기화를 정의할 시, 객체가 생성될 때마다 초기화 됨. 하지만, static 멤버 변수는 객체가 생성될 때 동시에 생성되는 변수가 아님.

class SoComplex
{
private:
	static int cmxObjCnt;

public:
	SoComplex()
	{
		cmxObjCnt++;
		cout << cmxObjCnt << "번째 SoComplex 객체" << endl;
	}

	SoComplex(SoComplex& copy)
	{
		cmxObjCnt++;
		cout << cmxObjCnt << "번째 SoComplex 객체" << endl;
	}
};
int SoComplex::cmxObjCnt = 0;

int main(void)
{
	SoSimple sim1;
	SoSimple sim2;

	SoComplex com1;
	SoComplex com2 = com1;
	SoComplex(); // => 생성자 호출 형태, 임시 객체 생성

	return 0;
}