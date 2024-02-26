# include <iostream>
using namespace std;

class Student
{

public:

	char NAME[20]; // 문자열의 배열 선언하고 바로 초기화하지 않는 경우, strcpy()를 통하여 초기화 한다
	char MAJOR[20];
	int AGE; 
	const int ID; // 기본적으로 객체가 생성되기 전 상수(const)는 초기화 되어야함 => 해결방법 16행

public:
	// 문자열의 '주소'(*)를 저장하여 사용 => 포인터 변수로 지정하여 문자열로 접근
	// 멤버이니셜라이즈: 객체 생성 시, 초기화 되지 않는 멤버들을 초기화 할 때 사용.
						// 즉, 객체 생성과 상관없이 미리 초기화가 되는 멤버들에 초기화
	Student(const char *sname, int sage, int sid, const char *smajor) : ID(sid) // 멤버 이니셜라이즈: 객체가 생성되기 전, 상수값 초기화
		// 즉, 문자열 = 주소이기에 포인터 변수에 넣어서 사용. 문자열의 첫번째 문자 준소가 저장
		// 원본이 변경되면 안되기에 const
	
	{
		strcpy (NAME, sname);
		strcpy (MAJOR, smajor);
		AGE = sage;
	}

	void StudentInfo()
	{
		cout << "학생 정보" << endl;
		cout << "이름: " << NAME << endl;
		cout << "나이: " << AGE << endl;
		cout << "학번: " << ID << endl;
		cout << "전공: " << MAJOR << endl << endl;

	}
};

int main()
{
	Student s1("이성희", 25, 201912186, "디스플레이반도체"); // 객체 생성 시, 생성자 호출
	s1.StudentInfo();

	return 0;
}