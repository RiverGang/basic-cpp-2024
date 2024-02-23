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

## 5일차

## 6일차

## 10일차