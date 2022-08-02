#include<iostream>
using namespace std;


class demo
{
	public:   
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
	demo obj1(10,20);
	demo obj2(10,20);
	demo robj1(0,0);
	demo robj2(0,0);
	
	
	
	return 0;
}