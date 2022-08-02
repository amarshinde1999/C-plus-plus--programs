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