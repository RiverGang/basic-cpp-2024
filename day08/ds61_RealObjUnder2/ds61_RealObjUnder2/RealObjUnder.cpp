# include <iostream>
using namespace std;


// Ŭ���� Data�� �䳻 �� ����

typedef struct Data
{
	int data;
	void (*ShowData)(Data*); // ShowData ����Լ� ����, �Ű������� ������ ����
	void (*Add)(Data*, int); // Add ����Լ� ����
} Data;

// �Լ��� �̸� = �ּ�

 // ShowData, Add ����Լ� ����
 // Data type�� ������ ������ ����Ű�� data ��
void ShowData(Data* THIS) {cout << "Data: " << THIS->data << endl;} 
void Add(Data* THIS, int num) { THIS->data += num; }


// ������ ����� main �Լ�
int main(void)
{
	Data obj1 = { 15, ShowData, Add }; // ����ü���� ����� ShowData�� Add�� �ʱ�ȭ
	Data obj2 = { 7, ShowData, Add }; // �Լ� ShowData�� Add�� obj1�� obj2�� �����ϴ¼�

	obj1.Add(&obj1, 17); // �Լ� Add�� �Է� ���´� (�ּ�, ����)�̱⿡ &(�ּ�)���
	obj2.Add(&obj2, 9);

	obj1.ShowData(&obj1);
	obj2.ShowData(&obj2);

	return 0;
}