// desc: cout�� endl ����
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

		void operator<< (int num) // ����
		{
			printf("%d", num);
		}

		void operator<< (double e) // �Ǽ�
		{
			printf("%g", e);
		}

		void operator<< (ostream& (*fp)(ostream& ostm))
		// (*fp) => �Լ� �̸��� ��Ÿ���� ������(39�� �Լ�), (ostream& ostm) => �Լ��� �Է�
		{
			fp(*this);
		}
	};

	ostream& endl(ostream& ostm)
	{
		ostm << '\n';
		fflush(stdout);
		//��� ������ �ƹ��͵� ������ �Ѵ�
		return ostm;
	}

	ostream cout;
}


int main(void)
{
	using mystd::cout;
	using mystd::endl;

	cout << "Simple String"; // ���ڿ�
	cout << endl;
	cout << 3.14; // �Ǽ�
	cout << endl;
	cout << 123; // ����
	endl(cout);

	return 0;
}
