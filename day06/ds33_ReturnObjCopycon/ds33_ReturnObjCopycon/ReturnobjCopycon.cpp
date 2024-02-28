// desc: �ӽð�ü ������ ���� ������ ���� ȣ��
// p234

# include <iostream>
using namespace std;

class SoSimple
{
private:
	int num;

public:
	SoSimple(int n) : num(n)
	{}
	SoSimple(const SoSimple& copy) : num(copy.num)
	{
		cout << "Called SoSimple(const SoSimple& copy)" << endl;
	}

	SoSimple& AddNum(int n)
	{
		num += n;
		return *this; // ���� ���·� �޴� ��ü�� �ּҷ� ��ȯ
	}

	void ShowData()
	{
		cout << "num: " << num << endl;
	}
};

SoSimple SimpleFuncObj(SoSimple ob)
{
	cout << "return ����" << endl;
	return ob;
}

int main(void)
{
	SoSimple obj(7);
	SimpleFuncObj(obj).AddNum(30).ShowData();
	// SoSimple re = SimpleFuncObj(obj);
	
	// AddNum()�� ����Ǳ� ��, SimpleFuncObj()�� ���� ��� return�� ����ϱ� ���ؼ��� return �� ���� ���� �ӽ� ��ü�� �����Ǿ����
	// SimpleFuncObj()�� return ob�� �Լ� �ۿ��� ����� �� ���� ����(��������) ���� ������� ��, �ܺο��� ����ϱ� ���� ���� ������ �ӽ� ��Ұ� �ʿ�
	// �ӽ� ��ü�� �����ϱ� ���� ��������� ȣ��.

	obj.ShowData();
	return 0;
}