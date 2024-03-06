# include <iostream>
using namespace std;

class AAA
{
private:
	int num;

public:
	AAA(int n = 0) : num(n)		// 정수하나를 입력으로 가지는 생성자
	{
		cout << "AAA(int n=0)" << endl;
	}

	AAA(const AAA& ref) : num(ref.num) // 객체를 입력으로 가지는 생성자
	{
		cout << "AAA(const AAA& ref)" << endl;
	}

	AAA& operator=(const AAA& ref) // 대입연산자 오버로딩
	{
		num = ref.num;
		cout << "operator=(const AAA& ref" << endl;
		return *this;
	}
};


class BBB
{
private:
	AAA mem;		/// AAA 타입의 객체
public:
	BBB(const AAA& ref) : mem(ref) { } // 멤버이니셜라이즈(콜론':' 초기화)를 통해서 초기화
};


class CCC
{
private:
	AAA mem;
public:
	CCC(const AAA& ref) { mem = ref; } // 대입연산을 통해서 초기화
};


int main(void)
{
	AAA obj1(12);
	cout << "***********************" << endl;
	BBB obj2(obj1);
	cout << "***********************" << endl;
	CCC obj3(obj1);

	return 0;
}


// 배열 이름 ary는 배열이 시작주소
int ary[3]; // 배열선언부에서 배열 인덕스에 있는 크기
ary[2];

ary[0]] = 10; // 0번방, 첫번째 데이터
// 배열의 0번방의 값


*(ary + 1) = 20; //* (배열의 시작주소 + 0) = 10
// 배열의 시작주소 +1 다음 방 (즉, 첫번째방)에 해당하는 곳에 20을 넣어라
// ary의 주소가 0x0011 이라면, 다음 주소는0x0015이다