#include<iostream>
using namespace std;




class Demo
{
	int  i;
	public:
	int x;
	private:
	int y;
	
	public:
	Demo()
	{
	x=10;
	y=20;
	i=30;
	}
	
	void fun()
	{
		cout<<"inside public fun\n";
		cout<<y;
		fun();
	}
	
	
};
int main()
{
	return 0;
}