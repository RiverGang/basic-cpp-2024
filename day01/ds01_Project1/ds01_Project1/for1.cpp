/*#include <iostream>

using namespace std;

int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	int ary[3] = { 10, 20, 30 };

	for (int i = 0; i < 10; i++) {
		cout << i << endl;
	}
	return 0;
}*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(const char* shirt_size[], int shirt_size_len) {
    // Write code here.
    int ret[sizeof(shirt_size_len)];
    for (int i = 0; i < shirt_size_len; i++)
    {
        if (shirt_size[i] = "XS")
            ret[0]++;
        else if (shirt_size[i] = "S")
            ret[1]++;
        else if (shirt_size[i] = "M")
            ret[2]++;
        else if (shirt_size[i] = "L")
            ret[3]++;
        else if (shirt_size[i] = "XL")
            ret[4]++;
        else
            ret[5]++;
    }
    int* answer = ret;
    return answer;
}

// The following is main function to output testcase.
int main() {
    const char * shirt_size[] = { "XS", "S", "L", "L", "XL", "S" };
    int shirt_size_len = 6;
    int* ret = solution(shirt_size, shirt_size_len);

    // Press Run button to receive output.       
    printf("Solution: return value of the function is {");
    for (int i = 0; i < 6; i++) {
        if (i != 0) printf(", ");
        printf("%d", ret[i]);
    }
    printf("} .\n");
}