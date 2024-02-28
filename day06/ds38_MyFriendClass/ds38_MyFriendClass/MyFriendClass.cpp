#include <iostream>
#include <cstring>
using namespace std;

class Girl; // 함수의 선언과 정의를 분리할 때 앞에서 미리 알려두는 것처럼, 미리 알려주는 용도 가독성을 높여줌

class Boy
{
private:
	int height;
	friend class Girl; // friend 선언
public:
	Boy(int len) : height(len)
	{}

	void ShowYourFriendInfo(Girl& frn); // 멤버함수의 선언부와 정의부 분리
};


class Girl
{
private:
	char phNum[29];
public:
	Girl(const char* num)
	{
		strcpy(phNum, num);
	}

	void ShowYourFriendInfo(Boy& frn);
	friend class Boy; // friend 선언
};


void Boy::ShowYourFriendInfo(Girl& frn) // 멤버함수의 정의부 소속 표시(Boy class)
{
	cout << "Her phone number: " << frn.phNum << endl; // Boy의 멤버함수지만, Girl의 필드 사용

}


void Girl::ShowYourFriendInfo(Boy& frn)
{
	cout << "His height: " << frn.height << endl; // Girl의 멤버함수이지만 Boy의 필드 사용
}


int main(void)
{
	Boy boy(170);
	Girl girl("010-1234-5678");
	boy.ShowYourFriendInfo(girl);
	girl.ShowYourFriendInfo(boy);
	
	return 0;	
}