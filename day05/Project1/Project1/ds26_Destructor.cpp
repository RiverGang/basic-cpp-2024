# include <iostream>
using namespace std;

/*class Person
{
private:
	char* name;
	int age;

public:
	Person(const char* myname, int myage) // 입력 2개를 가진 생성자, 
	{
		int len = strlen(myname) + 1; // strlen(): 문자열 길이를 구하는 함수, 
		// +1 더하기 : 배열 맨 뒤 Null값을 붙여 해당 배열이 문자열임을 알림.
		name = new char[len]; // heap 영역에 len 크기의 메모리를 할당 받아 name 주소 연결
		cout << "char의 크기: " << sizeof(char) << endl;
		strcpy(name, myname); // 문자열 복사 strcpy(), "동적 영역(heap)"에 저장된 문자열 이름 name 값 "Lee dong Woo"+Null 문자열
		age = myage;
	}

	void ShowPersonInfo() const
	{
		cout << "이름: " << name << endl;
		cout << "나이: " << age << endl;

	}

	~Person() // 소멸자 => 객체 생성 시, 호출하지 않아도 자동으로 실행
	{
		delete[]name;
		cout << "called destructor!" << endl;
	}
};

int main(void)
{
	Person man1("Lee dong Woo", 29); // "정적 영역"에 저장된 이름 man1 값 "Lee dong Woo" 문자열
	Person man2("Jang dong gun", 41);
	man1.ShowPersonInfo();
	man2.ShowPersonInfo();
	return 0;
}
*/