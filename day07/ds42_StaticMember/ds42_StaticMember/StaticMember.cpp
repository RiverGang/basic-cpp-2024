// desc: static �������, Ŭ���� ����
// p258

# include <iostream>
using namespace std;

class SoSimple
{

private:
	static int simObjCnt; // Ŭ���� ���� ����: static + type + ������

public:
	SoSimple()
	{
		simObjCnt++;
		cout << simObjCnt << "��° SoSimple ��ü" << endl;
	}
};
int SoSimple::simObjCnt = 0; // Ŭ���� ���� �ʱ�ȭ: type + Ŭ������ :: ������ = �ʱ�ȭ
// �޸� ������ ����� �� 0���� �ʱ�ȭ�϶�� ��
// Ŭ������ �����ڿ� �ʱ�ȭ�� ������ ��, ��ü�� ������ ������ �ʱ�ȭ ��. ������, static ��� ������ ��ü�� ������ �� ���ÿ� �����Ǵ� ������ �ƴ�.

class SoComplex
{
private:
	static int cmxObjCnt;

public:
	SoComplex()
	{
		cmxObjCnt++;
		cout << cmxObjCnt << "��° SoComplex ��ü" << endl;
	}

	SoComplex(SoComplex& copy)
	{
		cmxObjCnt++;
		cout << cmxObjCnt << "��° SoComplex ��ü" << endl;
	}
};
int SoComplex::cmxObjCnt = 0;

int main(void)
{
	SoSimple sim1;
	SoSimple sim2;

	SoComplex com1;
	SoComplex com2 = com1;
	SoComplex(); // => ������ ȣ�� ����, �ӽ� ��ü ����

	return 0;
}