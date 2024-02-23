/*
	C++ 타입의 구조체: 구조체 멤버로 멤버 변수와 멤버 함수를 가진다
*/
/*
# include <iostream>
using namespace std;

struct human
{
	// 구조체내 멤버 변수
	char name[20];
	int age;
	char job[20];

	void showHuman() // 구조체 안의 함수이기때문에 구조체를 불러올 필요 없음 => 멤버 함수
	{
		cout << "name: " << name << "age: " << age << "jop: " << job; // 구조체에서 정의된 변수 그대로 사용
	}

};


int main() {

	int a = 0;
	human h1 = { "홍길동", 50, "의적" };
	h1.showHuman();

	return 0;
}
*/