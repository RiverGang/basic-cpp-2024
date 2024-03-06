// desc: cout과 endl 이해
// p429

# include <iostream>
namespace mystd
{
	using namespace std;

	class ostream
	{
	public:
		void operator<< (const char* str)
		{
			printf("%s", str);
		}

		void operator<< (char str)
		{
			printf("%c", str);
		}

		void operator<< (int num) // 정수
		{
			printf("%d", num);
		}

		void operator<< (double e) // 실수
		{
			printf("%g", e);
		}

		void operator<< (ostream& (*fp)(ostream& ostm))
		// (*fp) => 함수 이름을 나타내는 포인터(39행 함수), (ostream& ostm) => 함수의 입력
		{
			fp(*this);
		}
	};

	ostream& endl(ostream& ostm)
	{
		ostm << '\n';
		fflush(stdout);
		//출력 버프에 아무것도 없도록 한다
		return ostm;
	}

	ostream cout;
}


int main(void)
{
	using mystd::cout;
	using mystd::endl;

	cout << "Simple String"; // 문자열
	cout << endl;
	cout << 3.14; // 실수
	cout << endl;
	cout << 123; // 정수
	endl(cout);

	return 0;
}
