// desc: static
// p255

# include<iostream>
using namespace std;

void Counter()
{
	//static int cnt; 정적 데이터 영역에 한번 생성(초기화), 이후 프로그램 종료시까지 소멸 X => 누적 가능 
	// 즉, 함수 내 선언된 지역변수 일지라도 함수가 종료되어도 소멸 X
	// 사용자체는 함수 안에서 사용 -> main에서 변경이나 사용은 불가
	
	int cnt = 0; // 만약 static이 없이 초기화 하는 형태라면? => Counter() 함수는 1만 출력.
	cnt++;
	cout << "current cnt: " << cnt << endl;
} // static가 없으면, 함수 한번 실행 후 int cnt 소멸. 이후 반복해도 다시 0부터 함수 연산

int main(void)
{
	for (int i = 0; i < 10; i++)
		Counter();
	return 0;
}