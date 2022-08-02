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
demo operator +(demo op)
{
	return op;
}
demo operator -(demo op)
{
	return demo(-op.x,op.y);
}



int main()
{
	demo obj1(11,-21);
	demo obj2(51,-101);
	demo robj1(0,0);
	demo robj2(0,0);
	
	
	robj1= +obj1;          
	cout<<robj1.x<<"\n";    //11
	cout<<robj1.y<<"\n";   //-21
	
	
	robj2= -obj2;
	cout<<robj2.x<<"\n";   //-51
	cout<<robj2.y<<"\n";    //101
	
	return 0;
}