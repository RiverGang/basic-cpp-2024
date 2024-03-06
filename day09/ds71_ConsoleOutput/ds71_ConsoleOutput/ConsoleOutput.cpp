# include <iostream>
using namespace std;

class Myclass
{
private:
	int num;

public:
	Myclass (int mynum) : num(mynum)
	{}

	void print() const
	{
		cout << "value: " << num << endl;
	}

	friend Myclass operator+(const Myclass& ref1, const Myclass& ref2);
	
};

Myclass operator+(const Myclass& ref1, const Myclass& ref2)
{
	Myclass total(ref1.num + ref2.num);
	return total;
}


int main()
{
	Myclass a(10);
	a.print();

	Myclass b(10);
	b.print();

	Myclass c = b;
	c.print();

	Myclass d = a + b + c;
	d.print();

	return 0;
}