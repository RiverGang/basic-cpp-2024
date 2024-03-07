// desc: �� �̻��� ��(Type)�� ���� ���ø� ����
// p533

# include <iostream>
using namespace std;

template <class T1, class T2>
void ShowData(double num)
{
	cout << (T1)num << ", " << (T2)num << endl;
	// ���ڷ� ���޵� num ���� T1�� T2�� ��õǴ� �ڷ������� �� ��ȯ�ؼ� ���
}

int main(void)
{
	ShowData<char, int>(65); // num = 65, T1 type = char, T2 type = int
	ShowData<char, int>(67);
	ShowData<char, double>(68.9);
	ShowData<char, double>(69.2);
	ShowData<short, double>(70.4);

	return 0;
}