#include<iostream>
using namespace std;

class demo
{
	public:
	void fun(int *p)
	{
		cout<<"first definition";
	}
	
	void fun(float *p)
	{
		cout<<"second definition";
	}
	
	void fun(int no)
	{
		cout<<"third definition";
	}
};

int main()
{
	int no=11;
	float f=3.14;
	
	demo obj();
	
	obj.fun(no);
	obj.fun(&no);
	obj.fun(&f);
	
	return 0;
}