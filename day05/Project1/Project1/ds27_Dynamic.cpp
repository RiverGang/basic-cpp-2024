/*
�޸� �����Ҵ�: new ������ ���
���α׷� ���� �߿� �޸𸮸� �Ҵ� �޴´�


#include <iostream>
using namespace std;

int main()
{
	cout << "int size: "<<sizeof(int) << endl;
	int *pi = new int; // heap ������ int ũ�⸸ŭ �Ҵ�. int type�� �ּ� ����.
	// ���� �Ҵ� �޴� ���� type�� int�� ������(*) ����
	
	*pi = 10; // �����Ͱ� ����Ű�� ������ ��
	cout << "pi�� ����Ű�� ���� ����� ��: " << *pi << endl;
	delete pi; // heap ���� �޸� ����. ���� �Ҵ���� �޸� ���� ��ȯ

	int *pary = new int[10];// int type�� pary �̸� �ּ�, heap ������ int �迭 ũ�� 10
	for (int i = 0; i < 10; i++) {
		pary[i] = i + 10; // �迭�� �� �濡 ����(���)���� ���� �ִ´�
		printf("pary[%d] : %d\n", i, pary[i]);
	}

	delete[]pary; // �迭�� �����Ҵ��� �޸� ��ȯ

	return 0;
}*/