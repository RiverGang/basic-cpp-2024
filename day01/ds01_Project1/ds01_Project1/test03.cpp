/* #include <iostream>

int gloval = 100; // 전역변수, 프로그램 내 어디서든 사용가능

void func() {
	int a = 100;
	// 지역변수  = 로컬변수 : 선언되어진 범위 안에서만 사용 가능 (static 영역에 저장)
	// a 변수는 func() 함수 내에서만 가능 ex) main()에서 사용 불가

	gloval = 200; // 전역변수
}

int main() {

	int val; // 메모리공간(RAM)에 int 크기로 저장공간을 할당받고 val를 이름으로 사용
	std::cout << "숫자입력: ";
	std::cin >> val; // 키보드로부터 입력을 받아 '>>' 오른쪽 변수에 저장
	std::cout << "입력한 숫자는 " << val <<"입니다."<< std::endl;

	gloval = 300; // 전역변수
	return 0;
}
*/

