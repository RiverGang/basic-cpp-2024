# include <iostream>

class MyClass
{
	int* ptr;

public:
	MyClass(int p): ptr(new int[100]) // heap ������ int �迭�� �Է����� ����
	{
		printf("������ ȣ��\n");
	}

	~MyClass()
	{
		printf("�Ҹ��� ȣ��\n");
		delete[]ptr;
	}
};

int main()
{
	MyClass* m1 = new MyClass(10); // �Ϲ� ������(*) ��ü
	std::cout << "==============================================" << std::endl;


	std::unique_ptr<MyClass> m2(new MyClass(20));
	// unique_ptr<���ø�> <- ����Ʈ������ Ű����
	// �ڵ���ȯ
	return 0;
}