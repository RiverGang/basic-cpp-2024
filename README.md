# basic-cpp-2024
IoT 개발자 심화 프로그래밍 언어 학습리포지토리

## 1일차
- 개발환경 설치
- C, C++ 소스코드 실행

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

## 3일차

## 4일차

## 5일차

## 6일차

## 10일차