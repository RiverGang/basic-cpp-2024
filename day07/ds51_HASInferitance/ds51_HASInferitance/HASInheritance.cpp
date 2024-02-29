// desc: HAS-A 관계
// p309

# include <iostream>
# include <cstring>
using namespace std;

class Gun
{
private:
	int bullet;

public:
	
	Gun(int bnum) : bullet(bnum)
	{ }
	
	int getbullet() 
	{	return bullet; }
	// private 접근제한 형태의 멤버변수 값을 바로 자식 클래스에서 사용하여 나타낼 수 없기 때문에
	// 자식 클래스에서도 접근 가능한 public의 멤버 함수 형태로 return

	void Shot()
	{
		cout << "BBANG!" << endl;
		bullet--;
	}

};

class Police : public Gun
{
private:
	int handcuffs; // 소유한 수갑의 수

public:
	Police(int bnum, int bcuff)
		: Gun(bnum), handcuffs(bcuff)
	{ }

	void PutHandcuff()
	{
		cout << "SNAP!" << endl;
		handcuffs--;
	}

	void state()
	{
		cout << getbullet() << ", " << handcuffs << endl;
	}
};

int main(void)
{
	Police pman(5, 3); // 총알 5, 수갑 3
	pman.state();
	pman.Shot();
	pman.PutHandcuff();
	pman.state();
	
	return 0;
}