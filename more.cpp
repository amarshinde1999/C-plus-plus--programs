#include<iostream>
using namespace std;

class demo
{
	public:
	void fun();
};

class hello
{
	public:
	int i;
	protected:
	int j;
	private:
	int k;
	
	public:
	hello()
	{
		i=10;
		j=20;
		k=30;
	}
	
	friend void demo::fun();
};

void demo::fun()
{
	demo dobj;
	cout<<dobj.i<<"\n";
	cout<<dobj.j<<"\n";
	cout<<dobj.k<<"\n";
}

int main()
{
	hello hobj;
	hobj.fun();
	return 0;
}