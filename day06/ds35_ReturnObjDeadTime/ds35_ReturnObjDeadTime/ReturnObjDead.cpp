# include <iostream>
using namespace std;

class SoSimple
{
private:
	int num;

public:
	SoSimple(int n) : num(n)
	{
		cout << "New Object: " << this << endl;
	}

	SoSimple(const SoSimple& copy) : num(copy.num)
	{
		cout << "New Copy obj: " << this << endl;
	}
	~SoSimple()
	{
		cout << "Destroy obj: " << this << endl;
	}
};

SoSimple SimpleFuncObj(SoSimple ob)
{
	cout << "Parm ADR: " << &ob << endl;
	return ob;
	// 임시객체 생성
}

int main(void)
{
	SoSimple obj(7);
	SimpleFuncObj(obj);

	cout << endl;
	SoSimple tempRef = SimpleFuncObj(obj);
	cout << "Return Obj " << &tempRef << endl;
	return 0;

	/*
	New Copy obj: 00000001000FF804 객체 ob 주소
	Parm ADR: 00000001000FF804 객체 ob 주소
	New Copy obj: 00000001000FF6C4 임시 객체 주소 (return 값이 사라지기 전에)
	Destroy obj: 00000001000FF804 ob 객체 삭제
	Return Obj 00000001000FF6C4 39행 실행, 임시객체 주소
	Destroy obj: 00000001000FF6C4 임시 객체 삭제
	Destroy obj: 00000001000FF6A4 객체 obj 소멸 (34행에서 만들어진 것)
	*/
}