# include <iostream>

class MyClass
{
	int* ptr;

public:
	MyClass(int p): ptr(new int[100]) // heap 영억의 int 배열을 입력으로 받음
	{
		printf("생성자 호출\n");
	}

	~MyClass()
	{
		printf("소멸자 호출\n");
		delete[]ptr;
	}
};

int main()
{
	MyClass* m1 = new MyClass(10); // 일반 포인터(*) 객체
	std::cout << "==============================================" << std::endl;


	std::unique_ptr<MyClass> m2(new MyClass(20));
	// unique_ptr<템플릿> <- 스마트포인터 키워드
	// 자동반환
	return 0;
}