/*
# include <iostream>
# include <string.h>
# include <stdlib.h>

// # define _CRT_SECURE_NO_WARNINGS
using namespace std;

char* MakeStrAdr(int len)
{
	// char * str = (char*)malloc(sizeof(char) * len); // C: heep ������ �޸� �Ҵ�, 20Byte ũ��
	//printf("char size: %llu\n", sizeof(char));
	char* str = new char[len]; // C++ �������� len ũ�⸸ŭ �޸� ���� �Ҵ�
	return str;
}

int main(void)
{
	char* str = MakeStrAdr(20);
	strcpy(str, "I am so happy~"); //str�� heep ������ ������ "" ������ �����ؼ� ����
	cout << str << endl;
	//free(str);
	delete[]str; // C++: �Ҵ� ���� �޸� ��ȯ
	return 0;
}*/