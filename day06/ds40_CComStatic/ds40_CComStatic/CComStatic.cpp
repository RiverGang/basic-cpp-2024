// desc: static
// p255

# include<iostream>
using namespace std;

void Counter()
{
	//static int cnt; ���� ������ ������ �ѹ� ����(�ʱ�ȭ), ���� ���α׷� ����ñ��� �Ҹ� X => ���� ���� 
	// ��, �Լ� �� ����� �������� ������ �Լ��� ����Ǿ �Ҹ� X
	// �����ü�� �Լ� �ȿ��� ��� -> main���� �����̳� ����� �Ұ�
	
	int cnt = 0; // ���� static�� ���� �ʱ�ȭ �ϴ� ���¶��? => Counter() �Լ��� 1�� ���.
	cnt++;
	cout << "current cnt: " << cnt << endl;
} // static�� ������, �Լ� �ѹ� ���� �� int cnt �Ҹ�. ���� �ݺ��ص� �ٽ� 0���� �Լ� ����

int main(void)
{
	for (int i = 0; i < 10; i++)
		Counter();
	return 0;
}