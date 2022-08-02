#include<iostream>
using namespace std;


class Base
{
	public:
	int i,j;
	Base()
	{
		cout<<"inside base constructor\n";
	}
	~Base()
	{
		cout<<"inside base destructor\n";
	}
};

class derived:public Base
{   public:
	int k,p;
	derived()
	
	{
		cout<<"inside derived constructor\n";
	}
	~derived()
	{
		cout<<"inside derived destructor\n";
	}

};

class derived1:public base
{	public:
	int a,b;
	derived1()
	{
		cout<<"inside derived1 constructor\n";
	}
	~derived1()
	{
		cout<<"inside derived1 destructor\n";
	}
};

int main()
{
	
	derived obj;
	
	return 0;
}