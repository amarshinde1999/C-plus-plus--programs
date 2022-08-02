#include<iostream>

using namespace std;


class Demo
{
	public:
	int x;
	int y;
	
	Demo(int a=10,int b=20)
	{
		x=a;
		y=b;
	}
	//void fun(Demo*this int no);
	void fun(int no)
	{
		cout<<"inside fun\n";
	}
};
int  main()
{
	Demo obj(11,21);
	obj.fun(21);  //fun(&obj,51)
	
	        
	return 0;
}

