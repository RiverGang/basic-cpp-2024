// desc: const ��ü�� const ��ü�� Ư����
// p244

#include <iostream>
using namespace std;

class SoSimple
{
private:
	int num;
public:
	SoSimple(int n) : num(n)
	{}

	SoSimple& AddNum(int n)
	{
		num += n; // ���� ����
		return *this;
	}

	void ShowData() const // �Լ� ��ü�� ���� �����Ű�� ������, const�� �ڿ� �������ν� ������ ������ ����.
	{
		cout << "num: " << num << endl; // ���� ����� ���� ����
	}
};

int main(void)
{
	const SoSimple obj(7); // ��ü�� ���ȭ(const)
	//obj.AddNum(20);
	obj.ShowData();

	return 0;
}