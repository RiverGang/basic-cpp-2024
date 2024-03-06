/*
硅凯狼 钎泅侥
*/

# include <iostream>

int mian()
{
	int arr[5] = { 1,2,3,4,5 };
	int* parr = arr;

	printf("arr 林家: %p\n", arr); 
	printf("arr 农扁: %u\n", sizeof(arr));

	printf("arr [0] 林家: %p\n", &arr[0]); // 0锅掳 规 林家
	printf("arr [1] 林家: %p\n", &arr[1]);
	printf("arr+1: %p\n", arr+1);


	printf("parr 林家: %p\n", &parr);
	printf("parr 单捞磐: %p\n", parr);
	printf("parr +1 : %p\n", parr+1);
	printf("parr[0]: %d\n	*pa: %d		arr[0]: %d\n", parr[0], *parr, arr[0]);


	return 0;
}
