/*
	다섯 명의 입력을 받아 각 학생별 총합과 평균,
	과목별 총합과 평균 구하기

	1. 객체 포인터 배열 사용

# define _CRT_SECURE_NO_WARNINGS
# include <iostream>
using namespace std;

class Grade
{
private:
	char* name; // 포인터 사용 => 주소가 필요
	int kr;
	int eng;
	int math;

public:
	Grade(const char* myname, int mykr, int myeng, int mymath)
	{
	
		this->name = new char[strlen(myname)+1]; // 객체의 -> name
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
	Grade* gradeAry[3]; // 객체 포인터 배열

	char name[20] = {};
	int inKr;
	int inEng;
	int inMath;

	// 1. 입력 받기
	for (int i = 0; i < 3; i++) {
		cout << "이름: ";
		cin >> name;
		cout << "국어 점수: ";
		cin >> inKr;
		cout << "영어 점수: ";
		cin >> inEng;
		cout << "수학 점수: ";
		cin >> inMath;

		cout << "이름: " << name << " 국어점수: " << inKr << " 영어점수: " << inEng << " 수학점수: " << inMath << endl << endl;

		// 2. 객체 생성: 5개의 객체를 생성 (2개)
		// 객체 배열 or 객체 포인터 배열
		 gradeAry[i] = new Grade(name, inKr, inEng, inMath);	
	}

	cout << "< ===== 학생별 총점 및 평점 ===== >" << endl;
	for (int i = 0; i < 3; i++) {

		// cout << "총점: " << gradeAry[i]->Sum() << "  평균: " << gradeAry[0]->Avr() << endl;
		printf("[ %s학생 ] 총점: %d, 평점: %.1lf\n", gradeAry[i]->getName(), gradeAry[i]->Sum(), gradeAry[i]->Avr());
	}


	// 과목별 총점 및 평균
	int totalKr = 0;
	int totalEng = 0;
	int totalMath = 0;

	for (int i = 0; i < 3; i++)
	{
		totalKr += gradeAry[i]->getKr();
		totalEng += gradeAry[i]->getEng();
		totalMath += gradeAry[i]->getMath();
	}

	cout << endl << "< ===== 과목별 총점 및 평점 ===== >" << endl;
	printf("국어 총점: %d, 국어 평점: %.1lf\n", totalKr, totalKr/3.0);
	printf("영어 총점: %d, 영어 평점: %.1lf\n", totalEng, totalEng / 3.0);
	printf("수학 총점: %d, 수학 평점: %.1lf\n", totalMath, totalMath / 3.0);


	// 객체 소멸
	for (int i = 0; i < 3; i++) {
		delete gradeAry[i];
	}

	return 0;
}*/