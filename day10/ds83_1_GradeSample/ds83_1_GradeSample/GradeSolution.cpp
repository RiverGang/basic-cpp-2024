/*
	�ټ� ���� �Է��� �޾� �� �л��� ���հ� ���,
	���� ���հ� ��� ���ϱ�

	1. ��ü ������ �迭 ���

# define _CRT_SECURE_NO_WARNINGS
# include <iostream>
using namespace std;

class Grade
{
private:
	char* name; // ������ ��� => �ּҰ� �ʿ�
	int kr;
	int eng;
	int math;

public:
	Grade(const char* myname, int mykr, int myeng, int mymath)
	{
	
		this->name = new char[strlen(myname)+1]; // ��ü�� -> name
		strcpy(this->name, myname);

		this ->kr = mykr;
		this ->eng = myeng;
		this ->math = mymath;
	}

	char* getName() { return name; }
	int getKr() { return kr; }
	int getEng() { return eng; }
	int getMath() { return math; }


	~Grade()
	{
		delete[]name;
	}

	int Sum() {
		int sum = kr + eng + math;
		return sum;
	}

	double Avr() {
		double average = Sum() / 3.0;
		return average;
	}
};


int main()
{
	Grade* gradeAry[3]; // ��ü ������ �迭

	char name[20] = {};
	int inKr;
	int inEng;
	int inMath;

	// 1. �Է� �ޱ�
	for (int i = 0; i < 3; i++) {
		cout << "�̸�: ";
		cin >> name;
		cout << "���� ����: ";
		cin >> inKr;
		cout << "���� ����: ";
		cin >> inEng;
		cout << "���� ����: ";
		cin >> inMath;

		cout << "�̸�: " << name << " ��������: " << inKr << " ��������: " << inEng << " ��������: " << inMath << endl << endl;

		// 2. ��ü ����: 5���� ��ü�� ���� (2��)
		// ��ü �迭 or ��ü ������ �迭
		 gradeAry[i] = new Grade(name, inKr, inEng, inMath);	
	}

	cout << "< ===== �л��� ���� �� ���� ===== >" << endl;
	for (int i = 0; i < 3; i++) {

		// cout << "����: " << gradeAry[i]->Sum() << "  ���: " << gradeAry[0]->Avr() << endl;
		printf("[ %s�л� ] ����: %d, ����: %.1lf\n", gradeAry[i]->getName(), gradeAry[i]->Sum(), gradeAry[i]->Avr());
	}


	// ���� ���� �� ���
	int totalKr = 0;
	int totalEng = 0;
	int totalMath = 0;

	for (int i = 0; i < 3; i++)
	{
		totalKr += gradeAry[i]->getKr();
		totalEng += gradeAry[i]->getEng();
		totalMath += gradeAry[i]->getMath();
	}

	cout << endl << "< ===== ���� ���� �� ���� ===== >" << endl;
	printf("���� ����: %d, ���� ����: %.1lf\n", totalKr, totalKr/3.0);
	printf("���� ����: %d, ���� ����: %.1lf\n", totalEng, totalEng / 3.0);
	printf("���� ����: %d, ���� ����: %.1lf\n", totalMath, totalMath / 3.0);


	// ��ü �Ҹ�
	for (int i = 0; i < 3; i++) {
		delete gradeAry[i];
	}

	return 0;
}*/