# include <iostream>
using namespace std;


class Grade
{
private:
	char *name;
	int kr;
	int math;
	int eng;

public:
	Grade(const char* myname= NULL, int mykr=0, int mymath=0, int myeng=0) : kr(mykr), math(mymath), eng(myeng)
	{	
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy(name, myname);
	}

	~Grade()
	{
		delete[] name;
	}
	
	void SetStudentInfo(char* myname, int mykr, int mymath, int myeng)
	{
		delete[] name;
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy(name, myname);

		name = myname;
		kr = mykr;
		math = mymath;
		eng = myeng;

	}

	void ShowInfo() const
	{
		int total = kr + math + eng;
		cout << "이름 : " << name << endl;
		cout << "국어: " << kr << ", 수학: " << math << ", 영어: " <<eng<< endl;
		cout << "총점 : " << total << endl;
		cout << "평균 : " << total / 3 << endl;
	}

	friend void ShowScore(const Grade& ref1, const Grade& ref2);
};

void ShowScore(const Grade& ref1, const Grade& ref2)
{	
	cout << "국어 총점: " << ref1.kr + ref2.kr << ", 평균: " << (ref1.kr + ref2.kr) / 2 << endl;
	cout << "수학 총점: " << ref1.math + ref2.math << ", 평균: " << (ref1.math + ref2.math) / 2 << endl;
	cout << "영어 총점: " << ref1.eng + ref2.eng << ", 평균: " << (ref1.eng + ref2.eng) / 2 << endl;
}




int main()
{
	char namestr[100];
	char* strptr;
	int krScore;
	int mathScore;
	int engScore;
	int len;

	Grade std[2];
	
	for (int i = 0; i < 2; i++)
	{
		cout << "이름 입력 >> ";
		cin >> namestr;
		cout << "국어 성적 >> ";
		cin >> krScore;
		cout << "수학 성적 >> ";
		cin >> mathScore;
		cout << "영어 성적 >> ";
		cin >> engScore;
		cout << endl;
		len = strlen(namestr) + 1;
		strptr = new char[len];
		strcpy(strptr, namestr);

		std[i].SetStudentInfo(strptr, krScore, mathScore, engScore);
	}
		
		/*Grade std1(strptr, krScore, mathScore, engScore);

		cout << "이름 입력 >> ";
		cin >> namestr;
		cout << "국어 성적 >> ";
		cin >> krScore;
		cout << "수학 성적 >> ";
		cin >> mathScore;
		cout << "영어 성적 >> ";
		cin >> engScore;
		cout << endl;
		len = strlen(namestr) + 1;
		strptr = new char[len];
		strcpy(strptr, namestr);
		
		Grade std2(strptr, krScore, mathScore, engScore);
		*/
		std[0].ShowInfo();
		std[1].ShowInfo();

		cout << endl;
		ShowScore(std[0], std[1]);

	
	return 0;
}