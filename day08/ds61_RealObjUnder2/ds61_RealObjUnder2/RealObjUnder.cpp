# include <iostream>
using namespace std;


// 클래스 Data를 흉내 낸 영역

typedef struct Data
{
	int data;
	void (*ShowData)(Data*); // ShowData 멤버함수 선언, 매개변수는 생략된 형태
	void (*Add)(Data*, int); // Add 멤버함수 선언
} Data;

// 함수의 이름 = 주소

 // ShowData, Add 멤버함수 정의
 // Data type의 포인터 변수가 가리키는 data 값
void ShowData(Data* THIS) {cout << "Data: " << THIS->data << endl;} 
void Add(Data* THIS, int num) { THIS->data += num; }


// 적절히 변경된 main 함수
int main(void)
{
	Data obj1 = { 15, ShowData, Add }; // 구조체변수 선언과 ShowData와 Add로 초기화
	Data obj2 = { 7, ShowData, Add }; // 함수 ShowData와 Add를 obj1과 obj2가 공유하는셈

	obj1.Add(&obj1, 17); // 함수 Add의 입력 형태는 (주소, 정수)이기에 &(주소)사용
	obj2.Add(&obj2, 9);

	obj1.ShowData(&obj1);
	obj2.ShowData(&obj2);

	return 0;
}