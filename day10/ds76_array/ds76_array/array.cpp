/*
�迭�� ǥ����
*/

# include <iostream>

int mian()
{
	int arr[5] = { 1,2,3,4,5 };
	int* parr = arr;

	printf("arr �ּ�: %p\n", arr); 
	printf("arr ũ��: %u\n", sizeof(arr));

	printf("arr [0] �ּ�: %p\n", &arr[0]); // 0��° �� �ּ�
	printf("arr [1] �ּ�: %p\n", &arr[1]);
	printf("arr+1: %p\n", arr+1);


	printf("parr �ּ�: %p\n", &parr);
	printf("parr ������: %p\n", parr);
	printf("parr +1 : %p\n", parr+1);
	printf("parr[0]: %d\n	*pa: %d		arr[0]: %d\n", parr[0], *parr, arr[0]);


	return 0;
}
