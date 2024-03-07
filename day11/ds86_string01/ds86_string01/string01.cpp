/*
C-Style ���ڿ�
���ڿ��� �������� �ι��ڰ� �ٴ´�
*/

#include <iostream>
using namespace std;

int main()
{
	int code = 97;
	cout << code << endl;
	cout << (char)code << endl; // ���ڿ� ���� ����ȯ ASCII �ڵ�ǥ
	cout << "==================================" << endl;
	char ary[6] = { 'a','b','c','d','e' }; 
	// ���ڿ� Ÿ���� �迭 ����
	// 5���� ��, �迭 ���� ���� 6��?
	cout << ary << endl;

	cout << "==================================" << endl;
	
	char ary1[] = { 'a','b','c','\0','e' };
	// NULL ���� - ���ڿ��� ���� �˸�
	cout << ary1 << endl; // abc�� ���
	
	cout << sizeof(ary1) << endl;
	// ���ڿ��� ��üũ�� ���� => 5

	cout << strlen(ary1) << endl;
	// NULL ���� ���� ũ�� ���� => 3


	cout << "==================================" << endl;
	
	char str[] = "string";	// �ڵ����� NULL���� ����
	cout << str << endl;
	cout << sizeof(str) << endl; // ���� ũ�� => 7
	cout << strlen(str) << endl; // NULL ���� �ձ��� ������ ���ڿ� ũ�� => 6

	str[0] = 'S'; // �迭������ ���ڿ��� ���氡��
	// stack ������ �迭 ������ �Ҵ�/����
	cout << str << endl;


	cout << "==================================" << endl;


	const char* pstr = "STRING"; //�������� ���ڿ��� const �ʼ�
	cout << pstr << endl;
	cout << sizeof(pstr) << endl; //pstr '������(�ּ�)'�� ũ�� 8byte
	cout << strlen(pstr) << endl;
	// pstr[0] = 's'; ---> ���ڿ��� �����ͷ� ����ϴ� ���� ���� �Ұ��� => const
	// Datasagment ������ ���ڿ� ���� => Read only Ư�� (�б⸸ ����, ���� �Ұ�)
	// stack ������ ������ ������ �ּҸ� ����� '����'


	/*
	C++ - Style : heap ������ ����
	*/

	cout << "==================================" << endl;


	string s = "string";
	cout << s << endl;
	cout << sizeof(s) << endl;
	// cout << strlen(s) << endl;
	cout << s.size() << endl;

	cout << "==================================" << endl;

	string s1 = "Lee SungHee";
	cout << sizeof(s1) << endl;
	// 40��� => string type�� ���ڿ��� 40Byte ũ��
	cout << s1.size() << endl;
	// string.size() ���� ���ڿ��� ũ��
	
	return 0;
}