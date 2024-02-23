/* 
#include <iostream>
#include <stdlib.h>
using namespace std;


class Simple // Class는 내가 선언한 type(자료형)이 될 수 있음
{
public:
	Simple() // 메서드이면서 생성자
	{
		cout << "I'm simple constructor!" << endl;
	}
};

int main(void)
{
	cout << "case 1: ";
	Simple* sp1 = new Simple; 
	// new 연산자를 통한 객체생성
	// 'Simple'이라는 자료형인 sp1 포인터 주소에 heap 영역 속 Simple크기만큼 할당된 공간을 연결
	
	cout << "case 2: ";
	Simple* sp2 = (Simple*)malloc(sizeof(Simple) * 1);

	cout << endl << "end of main" << endl;
	delete sp1; // 객체 반환
	free(sp2); 
	return 0;
}*/