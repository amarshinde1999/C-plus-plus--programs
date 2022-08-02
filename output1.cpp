#include<iostream>
using namespace std;

class demo
{
	public:
	
	
	
	void fun(int i)
	{
		cout<<"first definition";
	}
	
	void fun(int i,int j)
	{
		cout<<"second definition";
	}
	
	
};

void fun(int i,int j,int k)
{
	cout<<"third defination";
}

int main()
{
	
	
	//demo obj;
	
	//obj.fun(10);
	//obj.fun(10,20);

	fun(10,20,30);
	
	return 0;
}





