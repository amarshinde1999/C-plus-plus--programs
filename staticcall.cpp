#include<iostream>
using namespace std;

class Demo
{
	public:
	int i,j;  //instance (non static)
	
	static int x;  // class (static )
	
	Demo(int a=10,int b=20)
	{
		cout<<"inside constructor\n";
		this->i=a;
		this->j=b;
		
	}
	
	//void fun(Demo*this,int no)
	void fun(int no)
	{
		cout<<"inside no static fun\n";
		cout<<this->i<<"a";
		cout<<this->j<<"b";
		
	}
	//static void gun(int value)
	static void gun(int value)
	{
		cout<<"inside static gun\n";
		//cout<<this->i<<"\n";
	}
	
	void callreference (int *p)
	{
		ref++;
	}
};

int Demo::x=30;

int main()
{
	int a=4 int b=5 int c=6;
	
	cout<<Demo::x<<"\n";
	Demo::gun(11);
	
	Demo<<gun(12);
	callreference(&b);
	
	cout<<&b<<"\n";
	return 0;
}