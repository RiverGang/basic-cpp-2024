# include <iostream>
using namespace std;

class Student
{

public:

	char NAME[20]; // ���ڿ��� �迭 �����ϰ� �ٷ� �ʱ�ȭ���� �ʴ� ���, strcpy()�� ���Ͽ� �ʱ�ȭ �Ѵ�
	char MAJOR[20];
	int AGE; 
	const int ID; // �⺻������ ��ü�� �����Ǳ� �� ���(const)�� �ʱ�ȭ �Ǿ���� => �ذ��� 16��

public:
	// ���ڿ��� '�ּ�'(*)�� �����Ͽ� ��� => ������ ������ �����Ͽ� ���ڿ��� ����
	// ����̴ϼȶ�����: ��ü ���� ��, �ʱ�ȭ ���� �ʴ� ������� �ʱ�ȭ �� �� ���.
						// ��, ��ü ������ ������� �̸� �ʱ�ȭ�� �Ǵ� ����鿡 �ʱ�ȭ
	Student(const char *sname, int sage, int sid, const char *smajor) : ID(sid) // ��� �̴ϼȶ�����: ��ü�� �����Ǳ� ��, ����� �ʱ�ȭ
		// ��, ���ڿ� = �ּ��̱⿡ ������ ������ �־ ���. ���ڿ��� ù��° ���� �ؼҰ� ����
		// ������ ����Ǹ� �ȵǱ⿡ const
	
	{
		strcpy (NAME, sname);
		strcpy (MAJOR, smajor);
		AGE = sage;
	}

	void StudentInfo()
	{
		cout << "�л� ����" << endl;
		cout << "�̸�: " << NAME << endl;
		cout << "����: " << AGE << endl;
		cout << "�й�: " << ID << endl;
		cout << "����: " << MAJOR << endl << endl;

	}
};

int main()
{
	Student s1("�̼���", 25, 201912186, "���÷��̹ݵ�ü"); // ��ü ���� ��, ������ ȣ��
	s1.StudentInfo();

	return 0;
}