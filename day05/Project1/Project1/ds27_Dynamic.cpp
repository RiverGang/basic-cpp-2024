/*
메모리 동적할당: new 연산자 사용
프로그램 실행 중에 메모리를 할당 받는다


#include <iostream>
using namespace std;

int main()
{
	cout << "int size: "<<sizeof(int) << endl;
	int *pi = new int; // heap 영역에 int 크기만큼 할당. int type의 주소 리턴.
	// 따라서 할당 받는 변수 type도 int와 포인터(*) 형태
	
	*pi = 10; // 포인터가 가르키는 공간의 값
	cout << "pi가 가르키는 곳에 저장된 값: " << *pi << endl;
	delete pi; // heap 영역 메모리 삭제. 동적 할당받은 메모리 공간 반환

	int *pary = new int[10];// int type의 pary 이름 주소, heap 영역에 int 배열 크기 10
	for (int i = 0; i < 10; i++) {
		pary[i] = i + 10; // 배열의 각 방에 원소(요소)값을 집어 넣는다
		printf("pary[%d] : %d\n", i, pary[i]);
	}

	delete[]pary; // 배열로 동적할당한 메모리 반환

	return 0;
}*/