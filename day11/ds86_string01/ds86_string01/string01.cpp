/*
C-Style 문자열
문자열은 마지막에 널문자가 붙는다
*/

#include <iostream>
using namespace std;

int main()
{
	int code = 97;
	cout << code << endl;
	cout << (char)code << endl; // 문자열 형태 형변환 ASCII 코드표
	cout << "==================================" << endl;
	char ary[6] = { 'a','b','c','d','e' }; 
	// 문자열 타입의 배열 선언
	// 5개의 값, 배열 방의 개수 6개?
	cout << ary << endl;

	cout << "==================================" << endl;
	
	char ary1[] = { 'a','b','c','\0','e' };
	// NULL 문자 - 문자열의 끝을 알림
	cout << ary1 << endl; // abc만 출력
	
	cout << sizeof(ary1) << endl;
	// 문자열의 전체크기 측정 => 5

	cout << strlen(ary1) << endl;
	// NULL 문자 앞의 크기 측정 => 3


	cout << "==================================" << endl;
	
	char str[] = "string";	// 자동으로 NULL문자 삽입
	cout << str << endl;
	cout << sizeof(str) << endl; // 따라서 크기 => 7
	cout << strlen(str) << endl; // NULL 문자 앞까지 순수한 문자열 크기 => 6

	str[0] = 'S'; // 배열형태의 문자열은 변경가능
	// stack 영역에 배열 공간이 할당/저장
	cout << str << endl;


	cout << "==================================" << endl;


	const char* pstr = "STRING"; //포인터형 문자열엔 const 필수
	cout << pstr << endl;
	cout << sizeof(pstr) << endl; //pstr '포인터(주소)'의 크기 8byte
	cout << strlen(pstr) << endl;
	// pstr[0] = 's'; ---> 문자열을 포인터로 사용하는 경우는 변경 불가능 => const
	// Datasagment 영역에 문자열 저장 => Read only 특성 (읽기만 가능, 수정 불가)
	// stack 영역에 생성된 포인터 주소를 사용해 '연결'


	/*
	C++ - Style : heap 영역에 저장
	*/

	cout << "==================================" << endl;


	string s = "string";
	cout << s << endl;
	cout << sizeof(s) << endl;
	// cout << strlen(s) << endl;
	cout << s.size() << endl;

	cout << "==================================" << endl;

	string s1 = "Lee SungHee";
	cout << sizeof(s1) << endl;
	// 40출력 => string type의 문자열은 40Byte 크기
	cout << s1.size() << endl;
	// string.size() 순수 문자열의 크기
	
	return 0;
}