# include <iostream>
using namespace std;

class SoSimple
{
private:
	int num;

public:
	SoSimple(int n) : num(n)
	{
		cout << "New Object: " << this << endl;
	}

	SoSimple(const SoSimple& copy) : num(copy.num)
	{
		cout << "New Copy obj: " << this << endl;
	}
	~SoSimple()
	{
		cout << "Destroy obj: " << this << endl;
	}
};

SoSimple SimpleFuncObj(SoSimple ob)
{
	cout << "Parm ADR: " << &ob << endl;
	return ob;
	// �ӽð�ü ����
}

int main(void)
{
	SoSimple obj(7);
	SimpleFuncObj(obj);

	cout << endl;
	SoSimple tempRef = SimpleFuncObj(obj);
	cout << "Return Obj " << &tempRef << endl;
	return 0;

	/*
	New Copy obj: 00000001000FF804 ��ü ob �ּ�
	Parm ADR: 00000001000FF804 ��ü ob �ּ�
	New Copy obj: 00000001000FF6C4 �ӽ� ��ü �ּ� (return ���� ������� ����)
	Destroy obj: 00000001000FF804 ob ��ü ����
	Return Obj 00000001000FF6C4 39�� ����, �ӽð�ü �ּ�
	Destroy obj: 00000001000FF6C4 �ӽ� ��ü ����
	Destroy obj: 00000001000FF6A4 ��ü obj �Ҹ� (34�࿡�� ������� ��)
	*/
}