/* 
#include <iostream>
#include <stdlib.h>
using namespace std;


class Simple // Class�� ���� ������ type(�ڷ���)�� �� �� ����
{
public:
	Simple() // �޼����̸鼭 ������
	{
		cout << "I'm simple constructor!" << endl;
	}
};

int main(void)
{
	cout << "case 1: ";
	Simple* sp1 = new Simple; 
	// new �����ڸ� ���� ��ü����
	// 'Simple'�̶�� �ڷ����� sp1 ������ �ּҿ� heap ���� �� Simpleũ�⸸ŭ �Ҵ�� ������ ����
	
	cout << "case 2: ";
	Simple* sp2 = (Simple*)malloc(sizeof(Simple) * 1);

	cout << endl << "end of main" << endl;
	delete sp1; // ��ü ��ȯ
	free(sp2); 
	return 0;
}*/