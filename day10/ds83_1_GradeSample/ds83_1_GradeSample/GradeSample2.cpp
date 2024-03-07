# define _CRT_SECURE_NO_WARNINGS
# include <iostream>
# include <vector>
using namespace std;

class Grade
{
private:
	char* name; // 포인터 사용 => 주소가 필요
	int kr;
	int eng;
	int math;

public:
	/*Grade(const char* myname, int mykr, int myeng, int mymath) // 명시적 작성 생성자
	// 하지만 배열 선언에서는 명시적 작성자 불가능(소용없음)
	{

		this->name = new char[strlen(myname) + 1]; // 객체의 -> name
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
		cout << "디폴트 생성자 호출" << endl;
	}

	void SetGrade(char* myname, int mykr, int myeng, int mymath)
		// 객체 배열 => 방이 만들어지고 => 이후에 값 입력. 즉, 명시적으로 배열의 방이 만들어지면서 값 초기화 불가능
		// 별도의 필드 초기화 과정 필요 != 생성자
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
	// Grade gradeAry[3]; // 객체 배열 생성
	// 3개의 방을 가진 객체 배열이 만들어지면서 디폴트 생성자 3개 동시에 만들어짐

	char name[20] = {};
	char* strptr;
	int inKr;
	int inEng;
	int inMath;

	int num;

	// 학생 수를 입력 받은 만큼 동적으로 배열생성
	cout << "성적처리 학생 수 : " << endl;
	cin >> num;
	vector<Grade>gradeAry(num);


	for (int i = 0; i < num; i++) {
		cout << "이름: ";
		cin >> name;
		cout << "국어 점수: ";
		cin >> inKr;
		cout << "영어 점수: ";
		cin >> inEng;
		cout << "수학 점수: ";
		cin >> inMath;
		
		strptr = new char[strlen(name) + 1];
		strcpy(strptr, name);
		gradeAry[i].SetGrade(name, inKr, inEng, inMath);

		cout << "이름: " << name << " 국어점수: " << inKr << " 영어점수: " << inEng << " 수학점수: " << inMath << endl << endl;
	}

	cout << "< ===== 학생별 총점 및 평점 ===== >" << endl;
	for (int i = 0; i < num; i++) {

		printf("[ %s학생 ] 총점: %d, 평점: %.1lf\n", gradeAry[i].getName(), gradeAry[i].Sum(), gradeAry[i].Avr());
	}


	// 과목별 총점 및 평균
	int totalKr = 0;
	int totalEng = 0;
	int totalMath = 0;

	for (int i = 0; i < num; i++)
	{
		totalKr += gradeAry[i].getKr();
		totalEng += gradeAry[i].getEng();
		totalMath += gradeAry[i].getMath();
	}

	cout << endl << "< ===== 과목별 총점 및 평점 ===== >" << endl;
	printf("국어 총점: %d, 국어 평점: %.1lf\n", totalKr, totalKr / 3.0);
	printf("영어 총점: %d, 영어 평점: %.1lf\n", totalEng, totalEng / 3.0);
	printf("수학 총점: %d, 수학 평점: %.1lf\n", totalMath, totalMath / 3.0);


	//객체 소멸
	for (int i = 0; i < num; i++) {
		delete gradeAry[i];
	}

	return 0;
}