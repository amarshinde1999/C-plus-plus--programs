#include<iostream>
using namespace std;


class demo
{
	public:   //public
	int x;
	int y;
	
	demo(int i=0, int j=0)
	{
		x=i;
		y=j;
	}
	
};

bool operator ==(demo op1,demo2 op2)
{
	if((op1.x == op2.x)&&(op1.y == op2.y))
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	demo obj1(11,21);
	demo obj2(51,101);
	
	if(obj1==obj2)
	{
		cout<<"objects are same\n";
	}
	else
	{
		cout<<"objects are different\n";
	}
	
	return 0;
}