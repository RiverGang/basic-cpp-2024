/* 
C타입의 구조체
#include <stdio.h>

typedef struct human {
	char name[20];
	int age;
	char job[20];
}Human;


void showHuman(human h) 
{
	printf("name: $s age: %d job: $s\n", h.name, h.age, h.job);
}
int main()
{
	int a = 10;
	human h1 = { "홍길동", 50, "의적" }; //Human 타입의 변수를 선언하고 초기화
	showHuman(h1);
	return 0;
}*/