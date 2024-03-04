// desc: 참조자의 참조 가능성
// p361

# include <iostream>
using namespace std;

class First
{
public:
	void FirstFunc() { cout << "FirstFunc()"<<endl; }
	virtual void SimpleFunc() { cout << "First's SimpleFunc()" << endl; }
};

class Second : public First
{
public:
	void SecondFunc() { cout << "SecondFunc()" << endl; }
	virtual void SimpleFunc() { cout << "Second's SimpleFunc()" << endl; }
};

class Third : public Second
{
public:
	void ThirdFunc() { cout << "ThirdFunc()" << endl; }
	virtual void SimpleFunc() { cout << "Third's SimpleFunc()" << endl; }
};

int main(void)
{

	Third obj;
	obj.FirstFunc();
	obj.SecondFunc();
	obj.ThirdFunc();
	obj.SimpleFunc();

	Second& sref = obj; // 참조 타입의 오브젝트
	sref.FirstFunc();
	sref.SecondFunc();
	sref.SimpleFunc(); // (virtual)객체를 따라감 => obj는 Third type 객체

	First& fref = obj;
	fref.FirstFunc();
	fref.SimpleFunc();

	return 0;
}