#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
int* solution(char* shirt_size[], int shirt_size_len) { // 출력 int 주소

    int* answer = (int*)malloc(sizeof(int) * 6);
        for (int i = 0; i < shirt_size_len; ++i)
            answer[i] = 0;

        for (int i = 0; i < shirt_size_len; i++) {
            if (strcmp(shirt_size[0], "XS") == 0)
                answer[0]++;
            else if (strcmp(shirt_size[1], "S") == 0)
                answer[1]++;
            else if (strcmp(shirt_size[1], "M") == 0)
                answer[2]++;
            else if (strcmp(shirt_size[1], "L") == 0)
                answer[3]++;
            else if (strcmp(shirt_size[1], "XL") == 0)
                answer[4]++;
            else if (strcmp(shirt_size[1], "XXL") == 0)
                answer[5]++;
        }
    return answer;
}

// The following is main function to output testcase.
int main() {
    char* shirt_size[] = { "XS", "S", "L", "L", "XL", "S" };
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