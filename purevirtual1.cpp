#include<iostream>
using namespace std;

class Base
{
	
	public:
	int x,y;
	
	void fun()  //concrete non virtual
	{
		cout<<"Base fun\n";
	}
	
	virtual void gun()   //concrete virtual
	{
		cout<<"Base gun\n";
	}
	
	virtual void sun()   //concrete  virtual
	{
		cout<<"Base sun\n";
	}
	
	virtual void run()=0;  //abstract function

class Derived : piblic Base
{
	public:
	int i,j;
	
	 void fun()  
	{
		cout<<"Derived fun\n";
	}
	
	virtual void gun()  
	{
		cout<<"Derived fun\n";
	}
}

int main()
{
	
	
	
	return 0;
}