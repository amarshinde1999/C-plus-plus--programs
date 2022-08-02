#include<iostream>
using namespace std;

class Base
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
class derived:public Base
{
	public:
	int i;
	double d;
	
	void sun()
	{}
	
};
class derivedx:public derived
{
	public:
	int k;
	
	void run()
	{}
	
};

int main()
{
	Base bobj;
	bobj.i=10;
	cout<<bobj.i<<"\n";
	
	derived dobj;
	derivedx dobj1;
	return 0;
}