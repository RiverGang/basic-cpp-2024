# basic-cpp-2024
IoT 개발자 심화 프로그래밍 언어 학습리포지토리

## 1일차
- 개발환경 설치
- C, C++ 소스코드 실행
- 헤더 파일: 헤더 파일 내 표준 함수들을 사용

- C++ 기초
	1. 함수 정의

	```cpp
	'int main(){
    
		return;
    
		}
	```
 
		- int ⇒ 함수의 출력
			- void ⇒ 출력이 없는 함수일 경우 사용
			- 출력이 있을 경우, 반드시 return문이 있어야함
		- main ⇒ 함수명
		- (), 소괄호⇒ 입력  (괄호 안에 아무것도 없다 = 입력이 없다)
		- {}, 중괄호 ⇒ 함수의 정의, 범위를 나타냄
	
	
	2. 변수 선언
		- RAM으로 부터 저장공간 할당 받는 것
		- type, 자료형(ex) int) ⇒ 할당 받을 공간의 크기
	
	
	3. 문자와 문자열 입/출력
		- std::cout : 출력(out)
		- std::cin : 키보드로부터 입력(in)
	
	
	4. 반복 제어문
		- for, while
			- for (초기식; 조건식; 증감식;)
			- while (조건식)
			
			
	5. 함수의 다형성
		- 오버로딩, Overloading(다중정의): 함수의 이름이 같아도 **매개변수(=입력)**이 다른 것
		
		```cpp
		// 함수이름은 모두 같지만, ()안 매개변수 type이 다름
		void MyFunc(void) {
			std::cout << "Myfunc(void) called" << std::endl;
		}

		void MyFunc(char c) {
			std::cout << "Myfunc(char c) called" << std::endl;
		}

		void MyFunc(int a, int b) {
			std::cout << "Myfunc(int a, int b) called" << std::endl;
		}
		```
		
		- 오버라이딩(재정의): ‘상속’관계에서 발생
	
## 2일차
// class 안에 들어 가는 함수 = Method

- Default Value
- Reference 함수
   - 반환형 Reference Type
- Name Space
- 전역,지역변수
- C에서 메모리
   - 스택 : 지역변수, 매개변수
   - HEAP : 사용자에게 할당된 영역
      = Malloc() -> free()반환 = 사용을 할려면 Malloc으로 할당을 받는다
   - data: 함수, 전역변수, 상수, 문자 리터럴
   
   - // A & B = 비트 And 연산자
   - // A && B = 논리 And 연산자 = 논리 곱
   
## 3일차
- 참조자와 상수 자료형 const
	- 상수를 참조하기
	- const 자료형을 이용해 '임시변수'를 만들고 이 공간에 상수를 저장
	
	```cpp
	const int &ref = 30; // 상수 참조 예시

	in Adder(const int &num1, const int &num2)
		{
			return num1 + num2;  // 임시변수 생성으로 상수를 참조를 허용해 변수 선언 없이 호출하는 형태 가능
		} 
	```
- C++에서 C 라이브러리 사용하기
	- .h(확장자) 생략, 맨 앞에 c붙이기
	- <stdio.h> -> <cstdio>
	- <stdlib.h> -> <cstdlib>
	
- 클래스(Class)
	- 내가 정의하는 자료형(=type, =입력)
	- 멤버 변수(= 속성, 필드): 클래스 내에서 정의된 변수
	- 멤버 함수(=메서드, 기능): 클래스 내에서 정의된 함수
	- 생성자: 클래스 이름과 메서드 이름이 동일
	- 접근제어 지시자
		- private
		- public
		- protected
	
	- C++에서는 클래스 내 함수의 선언()과 정의{} 분리가능
		- 분리한 함수명 앞에 클래스 명과 범위연산자(::)를 붙여 Class에 소속시킴
	- C++ 파일 분할
		- 클래스 전체의 선언부와 정의부를 '파일별'로 분할
	
## 4일차
- Message Passing
- 생성자/소멸자
	- 생성자
		클래스 이름 = 함수 이름
		defalt 생성자: 반환형(=출력)이 선언되어 있지 않으며, 실제로도 반환하지 않음
- 문자열(배열)의 이후 초기화
	strcpy()
- 멤버 이니셜라이즈
	- 객체가 생성되기 전 초기화 되어야하는 type(ex) const)을 초기화 할 수 있게 해줌
	
## 5일차
- 멤버 이니셜라이즈 복습
	
- 생성자(클래스 이름과 같은 멤버 함수로 출력x)
	- 객체 생성시 자동으로 호출되는 멤버함수
	- 모든 클래스는 디폴트 생성자를 가지고 있음
	- 만약 명시적으로 생성자를 작성하면 디폴트 생성자의 호출 불가 -> 디폴트 생성자가 필요한 경우 명시적으로 작성
	- 멤버변수를 초기화를 담당
	
- 생성자 불일치
	- 매개변수가 void형으로 선언되는 디폴트 생성자
	- 생성자가 하나도 정의되어 있지 않을때에만 삽입이 됨!
	
- Private 생성자
	- 생성자들은 모두 Public으로 선언
	- 객체의 생성이 클래스의 외부에서 진행도기 때문에 생성자는 Public으로 선언
	
- 소멸자 => 객체 생성시 반드시 호출되는 것 생성자 -> 객체 소멸시 반드시 호출 되는 것은 소멸자

- 메모리 동적할당 : new 연산자 사용
	- 프로그램 실행 중 = 메모리 할당
	
- 객체 배열
```c++ 
SoSimple arr[10];
```

```c++ 동적으로 할당할 경우
SoSimple *ptrArr = new SoSimple[10]

```
- 포인터배열 : 포인터를 저장하는 배열
- 배열 포인터 : 배열을 가리키는 포인터
- 복사 생성자, 디폴트 생성자
## 6일차
- 복사 생성자
	- 객체의 ‘참조’(&) type을 입력으로 받는 생성자
	- 참조로 받는 이유? -> 무한으로 복사 되는 것을 방지
	
	- 얕은 복사
		디폴트 복사 생성자를 통한 멤버 대 멤버의 복사
	
	- 깊은 복사
		heap 영역에 저장된 값을 가리키는 주소 그대로 복사X
		heap 영역에 새로운 메모리 공간 할당, 새로운 공간을 가리키는 주소를 복사하는 객체에게 부여
		
- explicit
	- 대입 연산자를 이용한 묵시적 변환 방지
- const 선언 유무도 오버로딩 조건에 해당
- friend 선언
	- private 멤버의 접근을 허용하는 선언
- static
	- 함수 내에 선언된(지역변수) static
	- **한번만 초기화**, 함수를 빠져나가도 소멸되지 않음 ⇒ 지역변수처럼 특징이 변화
	- 전역변수와 동일하게, 특정한 값을 초기화 하지 않으면 0으로 초기화
	- 사용 자체는 선언된 함수 내에서만 가능
	

## 7일차
- static 멤버변수(= 클래스 변수)
	- 객체 생성마다 함께 생성되는 변수가 아닌 메모리 공간에 하나만 할당
	- 각 객체들은 클래스 변수에 접근할 수 있는 '권한'만 가짐
	
- 상속(Inheritance)

	```cpp
		class Person // 부모(기초) 클래스
		{
		private:
			int age;
			char name[50];
		public:
			// ...
		};

		class UnivStudent : public Person 
		// 자식(유도) 클래스
		// Person 클래스를 상속받는다
		// 상속 문법 -> ':' 접근제한 상속받을 클래스명
		{

		private:
		char major[50];

		public:
			UnivStudent(const char* myname, int myage, const char *mymajor) : Person(myage, myname) // 부모 클래스의 생성자를 호출하여 부모 클래스 멤버변수를 초기화
			{	
				cout << "자식 생성자 실행" << endl;
				strcpy(major, mymajor);
			}
	
	```
	
	- protected 접근제한 선언
		- 상속한 자식 클래스에서의 접근 허용
		- private의 확장된 개념
		- private < protected < public


## 8일차
	
## 10일차