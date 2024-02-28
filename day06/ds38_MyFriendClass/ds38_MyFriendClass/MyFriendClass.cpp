#include <iostream>
#include <cstring>
using namespace std;

class Girl; // �Լ��� ����� ���Ǹ� �и��� �� �տ��� �̸� �˷��δ� ��ó��, �̸� �˷��ִ� �뵵 �������� ������

class Boy
{
private:
	int height;
	friend class Girl; // friend ����
public:
	Boy(int len) : height(len)
	{}

	void ShowYourFriendInfo(Girl& frn); // ����Լ��� ����ο� ���Ǻ� �и�
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
	friend class Boy; // friend ����
};


void Boy::ShowYourFriendInfo(Girl& frn) // ����Լ��� ���Ǻ� �Ҽ� ǥ��(Boy class)
{
	cout << "Her phone number: " << frn.phNum << endl; // Boy�� ����Լ�����, Girl�� �ʵ� ���

}


void Girl::ShowYourFriendInfo(Boy& frn)
{
	cout << "His height: " << frn.height << endl; // Girl�� ����Լ������� Boy�� �ʵ� ���
}


int main(void)
{
	Boy boy(170);
	Girl girl("010-1234-5678");
	boy.ShowYourFriendInfo(girl);
	girl.ShowYourFriendInfo(boy);
	
	return 0;	
}