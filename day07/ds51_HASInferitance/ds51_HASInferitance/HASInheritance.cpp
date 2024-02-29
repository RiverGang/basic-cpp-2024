// desc: HAS-A ����
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
	// private �������� ������ ������� ���� �ٷ� �ڽ� Ŭ�������� ����Ͽ� ��Ÿ�� �� ���� ������
	// �ڽ� Ŭ���������� ���� ������ public�� ��� �Լ� ���·� return

	void Shot()
	{
		cout << "BBANG!" << endl;
		bullet--;
	}

};

class Police : public Gun
{
private:
	int handcuffs; // ������ ������ ��

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
	Police pman(5, 3); // �Ѿ� 5, ���� 3
	pman.state();
	pman.Shot();
	pman.PutHandcuff();
	pman.state();
	
	return 0;
}