#include<iostream>
using namespace std;

class base
{
	public:
	int i;
	float f;
	double d;
	
	void fun()	
	{}
	
	void gun()
	{}
	
};

class derived:public base
{
	public:
	int i;
	double d;
	
	void sun()
	{}
};

int main()
{
	base bobj;
	derived dobj;
	
	return 0;
}