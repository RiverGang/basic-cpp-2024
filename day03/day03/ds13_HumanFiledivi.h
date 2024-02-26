#pragma once

class human
{
private:
	char name[20];
	int age;
	char job[20];

public:
	human(const char hname, int hage, const char hjob);
	void humaninfo();
};