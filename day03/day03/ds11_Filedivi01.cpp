/*# include <iostream>

class AClass
{
private: // 접근제어지시자, private는 생략해도 기본 적용.
	int num;

public:
	AClass(int anum) // 생성자 => 주로 초기화 담당
	{
		num = anum;
	}

	void Ainfo()
	{
		std::cout << "A::num: " << num << std::endl;
	}
};

int main()
{
	AClass a(10); // AClass type의 이름이 'a'인 객체 생성과 동시에 AClass 생성자 호출
	a.Ainfo();

	return 0;
} */