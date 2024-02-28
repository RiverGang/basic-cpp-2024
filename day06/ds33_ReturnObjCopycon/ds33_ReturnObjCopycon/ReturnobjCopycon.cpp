// desc: 임시객체 저장을 위한 생성자 복사 호출
// p234

# include <iostream>
using namespace std;

class SoSimple
{
private:
	int num;

public:
	SoSimple(int n) : num(n)
	{}
	SoSimple(const SoSimple& copy) : num(copy.num)
	{
		cout << "Called SoSimple(const SoSimple& copy)" << endl;
	}

	SoSimple& AddNum(int n)
	{
		num += n;
		return *this; // 참조 형태로 받는 객체를 주소로 반환
	}

	void ShowData()
	{
		cout << "num: " << num << endl;
	}
};

SoSimple SimpleFuncObj(SoSimple ob)
{
	cout << "return 이전" << endl;
	return ob;
}

int main(void)
{
	SoSimple obj(7);
	SimpleFuncObj(obj).AddNum(30).ShowData();
	// SoSimple re = SimpleFuncObj(obj);
	
	// AddNum()이 실행되기 전, SimpleFuncObj()은 연산 결과 return을 사용하기 위해서는 return 될 값을 받을 임시 객체가 생성되어야함
	// SimpleFuncObj()의 return ob는 함수 밖에서 사용할 수 없기 때문(지역변수) 따라서 사라지기 전, 외부에서 사용하기 위해 값을 저장할 임시 장소가 필요
	// 임시 객체를 생성하기 위해 복사생성자 호출.

	obj.ShowData();
	return 0;
}