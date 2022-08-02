#include<iostream>
using namespace std;


class demo
{
	public:   //public
	int x;
	int y;
	
	demo(int i=10, int j=20)
	{
		x=i;
		y=j;
	}
	friend demo operator + (demo op1,demo op2);
};

demo operator + (demo op1,demo op2)
{
	cout<<"inside + operator\n";	          //logic
	
	return demo(op1.x + op2.x,op1.y + op2.y);
}
demo operator -(demo op1,demo op2)
{
	cout<<"inside - operator\n";	          //logic
	
	return demo(op1.x - op2.x,op1.y - op2.y);
}

demo operator *(demo op1,demo op2)
{
	cout<<"inside * operator\n";	          //logic
	
	return demo(op1.x * op2.x,op1.y * op2.y);
}
demo operator /(demo op1,demo op2)
{
	cout<<"inside / operator\n";	          //logic
	
	return demo(op1.x / op2.x,op1.y / op2.y);
}


int main()
{
	demo obj1(11,21);
	demo obj2(51,101);
	demo robj(0,0);
	
	robj=obj1*obj2;                 //robj+(obj1,obj2);
	cout<<robj.x<<"\n";            //62
	cout<<robj.y<<"\n";           //122
	
	return 0;
}