/*
# include <iostream>
# include <string.h>
# include <stdlib.h>

// # define _CRT_SECURE_NO_WARNINGS
using namespace std;

char* MakeStrAdr(int len)
{
	// char * str = (char*)malloc(sizeof(char) * len); // C: heep 영역에 메모리 할당, 20Byte 크기
	//printf("char size: %llu\n", sizeof(char));
	char* str = new char[len]; // C++ 힙영역에 len 크기만큼 메모리 공간 할당
	return str;
}

int main(void)
{
	char* str = MakeStrAdr(20);
	strcpy(str, "I am so happy~"); //str로 heep 공간에 접근해 "" 문장을 복사해서 저장
	cout << str << endl;
	//free(str);
	delete[]str; // C++: 할당 받은 메모리 반환
	return 0;
}*/