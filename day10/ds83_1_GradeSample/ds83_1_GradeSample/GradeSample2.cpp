# define _CRT_SECURE_NO_WARNINGS
# include <iostream>
# include <vector>
using namespace std;

class Grade
{
private:
	char* name; // ������ ��� => �ּҰ� �ʿ�
	int kr;
	int eng;
	int math;

public:
	/*Grade(const char* myname, int mykr, int myeng, int mymath) // ����� �ۼ� ������
	// ������ �迭 ���𿡼��� ����� �ۼ��� �Ұ���(�ҿ����)
	{

		this->name = new char[strlen(myname) + 1]; // ��ü�� -> name
		strcpy(this->name, myname);

		this->kr = mykr;
		this->eng = myeng;
		this->math = mymath;
	}*/

	Grade()
	{
		name = NULL;
		kr = 0;
		eng = 0;
		math = 0;
		cout << "����Ʈ ������ ȣ��" << endl;
	}

	void SetGrade(char* myname, int mykr, int myeng, int mymath)
		// ��ü �迭 => ���� ��������� => ���Ŀ� �� �Է�. ��, ��������� �迭�� ���� ��������鼭 �� �ʱ�ȭ �Ұ���
		// ������ �ʵ� �ʱ�ȭ ���� �ʿ� != ������
	{
		name = myname;
		kr = mykr;
		eng = myeng;
		math = mymath;
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
	// Grade gradeAry[3]; // ��ü �迭 ����
	// 3���� ���� ���� ��ü �迭�� ��������鼭 ����Ʈ ������ 3�� ���ÿ� �������

	char name[20] = {};
	char* strptr;
	int inKr;
	int inEng;
	int inMath;

	int num;

	// �л� ���� �Է� ���� ��ŭ �������� �迭����
	cout << "����ó�� �л� �� : " << endl;
	cin >> num;
	vector<Grade>gradeAry(num);


	for (int i = 0; i < num; i++) {
		cout << "�̸�: ";
		cin >> name;
		cout << "���� ����: ";
		cin >> inKr;
		cout << "���� ����: ";
		cin >> inEng;
		cout << "���� ����: ";
		cin >> inMath;
		
		strptr = new char[strlen(name) + 1];
		strcpy(strptr, name);
		gradeAry[i].SetGrade(name, inKr, inEng, inMath);

		cout << "�̸�: " << name << " ��������: " << inKr << " ��������: " << inEng << " ��������: " << inMath << endl << endl;
	}

	cout << "< ===== �л��� ���� �� ���� ===== >" << endl;
	for (int i = 0; i < num; i++) {

		printf("[ %s�л� ] ����: %d, ����: %.1lf\n", gradeAry[i].getName(), gradeAry[i].Sum(), gradeAry[i].Avr());
	}


	// ���� ���� �� ���
	int totalKr = 0;
	int totalEng = 0;
	int totalMath = 0;

	for (int i = 0; i < num; i++)
	{
		totalKr += gradeAry[i].getKr();
		totalEng += gradeAry[i].getEng();
		totalMath += gradeAry[i].getMath();
	}

	cout << endl << "< ===== ���� ���� �� ���� ===== >" << endl;
	printf("���� ����: %d, ���� ����: %.1lf\n", totalKr, totalKr / 3.0);
	printf("���� ����: %d, ���� ����: %.1lf\n", totalEng, totalEng / 3.0);
	printf("���� ����: %d, ���� ����: %.1lf\n", totalMath, totalMath / 3.0);


	//��ü �Ҹ�
	for (int i = 0; i < num; i++) {
		delete gradeAry[i];
	}

	return 0;
}