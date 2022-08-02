#include<iostream>
using namespace std;

class Demo
{
	public:
	int x;
	int y;
	
	Demo(int i,int j)
	{
	x=i;
	y=j;
	}
};
Demo operator +(Demo op1,Demo op2)
{
	cout<<"inside + operator\n";
	return Demo(op1.x+op2.x,op1.y+op2.y);
}

int main()
{
	Demo obj1(10,20);
	Demo obj2(30,40);
	Demo robj(0,0);
	
	robj=obj1+obj2;
	cout<<robj.x<<"\n";  //40
	cout<<robj.y<<"\n";  //60

	return 0;
}