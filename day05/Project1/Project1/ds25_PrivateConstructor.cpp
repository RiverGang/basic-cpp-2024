/*#include <iostream>
using namespace std;

class AAA
{
private:
	int num;
public:
	AAA() : num(0) {}
	
	~AAA() {}; // �Ҹ���, Ŭ���� �̸� �� '~'(����ǥ)�� ����

	AAA& CreateInitObj(int n) const
	{
		AAA* ptr = new AAA(n);
		return *ptr;
	}
	
	void ShowNum() const { cout << num << endl; }

private:
	AAA(int n) : num(n) {} // private�� ���ǵǾ� �ִ� ������ = �̱���(singleton), �ܺο��� ��ü ������ ����, class ���ο��� ��ü�� ������ �������־����
	// ��ü ������ �ϳ��� �� �� ���, �޸� ����
};

int main(void)
{
	AAA base;
	base.ShowNum();

	AAA& obj1 = base.CreateInitObj(3); // AAA type�� ��������(&) obj1 ���� = �������·� �޴� 10�� ����, 12�� new �����ڸ� ���� AAA(n)�� ���ο� ��ü heap ���� �Ҵ�, 
	//AAA type�� �ּҸ� ���� heap ���� ����, �Է� ���� �ϳ��� �����ε� ������ ����(19��) n���� �� �ʱ�ȭ
	obj1.ShowNum();

	AAA& obj2 = base.CreateInitObj(12);
	obj2.ShowNum();

	delete &obj1;
	delete& obj2;
	return 0;
}*/