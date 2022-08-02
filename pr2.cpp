#include<iostream>
using namespace std;

class Demo
{
	int i;
	
	public:
	int x;
	
	private:
	int y;
	
	public:
	Demo()
	{
		x=10;
		y=20;
		i=30;
	}
	
	void fun()
	{
		cout<<"inside public fun\n";
		cout<<y;  //allowed
		gun();
	}
	
	private:
	void gun()
	{
		cout<<"inside private gun\n";
		cout<<y;  //allowed
		
	}
	
	
	
};


int main()
{
	Demo obj;
	
	cout<<obj.x<<"\n";//allowed
	//cout<<obj.y<<"\n"; //not allowed
	//cout<<obj.i<<"\n"; //not allowed
	
	
	obj.fun();   //allowed
	//obj.gun();   //not allowed
	
	return 0;
}