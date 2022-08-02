#include<iostream>
using namespace std;

class Base
{
	
	public:
	void add(int a,int b)
	{
		return a+b;
	}
	
	virtual int sub(int a,int b)=0;
};

class Derived : piblic Base
{
	public:
	int i,j;
	
	intsub(int a,b)
	{
		return a-b;
	}
	
	int multi(int a,b)
	{
		return a * b;
	}
}

int main()
{
	Base *bp= new Derived();
	int ret=0;
	
	
	ret=bp->add(11,10);
	cout<<ret<<"\n";
	
	ret=bp->sub(11,10);
	cout<<ret<<"\n";
	
	ret=bp->multi(11,10);
	cout<<ret<<"\n";
	
	
	return 0;
}