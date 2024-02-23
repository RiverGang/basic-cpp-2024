#pragma once

class human
{
private:
	char name[20];
	int age;
	char job[20];

public:
	human(char hname, int hage, char hjob);
	void humaninfo();
};