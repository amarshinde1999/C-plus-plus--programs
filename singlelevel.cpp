#include<iostream>
using namespace std;

class Base
{
	public:
	int x,y;
	
	Base()
	{
		cout<<"inside base constructor\n";
	}
	~Base()
	{
		cout<<"inside base destructor\n";
	}
	void fun()
	{
		cout<<"inside base fun\n";
	}
};

class derived:public Base
{
	public:
	int i,j;
	
	derived()
	{
		cout<<"inside derived constructor\n";
	}
	
	~derived()
	{
		cout<<"inside derived destructor\n";
	}
	
	void gun()
	{
		cout<<"inside derived gun\n";
	}
	
	
	
};

int main()
{
	
	derived dobj;
	
	dobj.fun();
	dobj.gun();
	
	cout<<sizeof(Base)<<"\n";
	cout<<sizeof(derived)<<"\n";
	
	
	
	return 0;
}