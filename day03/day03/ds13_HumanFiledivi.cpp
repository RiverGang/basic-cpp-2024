# include <iostream>
# include "ds13_HumanFiledivi.h"
using namespace std;

human::human(const char hname, int hage, const char hjob)
{
	const char name = hname;
	int age = hage;
	const char job = hjob;
	
}

void human:: humaninfo() // 구조체 안의 함수이기때문에 구조체를 불러올 필요 없음 => 멤버 함수
{
	cout << "나는 " << age << "살인 " << job << " " << name << "입니다."; 
}

int main()
{
	human h("이성희", 25, "학생");
	
	h.humaninfo();

	return 0;
}