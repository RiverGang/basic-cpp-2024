#include <iostream>
using namespace std;

class SoSimple
{
public:					// 접근제한 public
	static int simObjCnt; // static 멤버변수 선언(클래스 멤버)
public:
	SoSimple()
	{
		simObjCnt++;
	}
};
int SoSimple::simObjCnt = 0; // static 멤버변수 초기화

int main(void)
{
	cout << SoSimple::simObjCnt << "번째 SoSimple 객체" << endl; // 클래스 이름만으로 static 멤버에 접근 가능
	SoSimple sim1;
	SoSimple sim2;

	cout << SoSimple::simObjCnt << "번째 SoSimple 객체" << endl;
	cout << sim1.simObjCnt << "번째 SoSimple 객체" << endl; // 객체를 통해 클래스 멤버에 접근
	cout << sim2.simObjCnt << "번째 SoSimple 객체" << endl;
	return 0;
}