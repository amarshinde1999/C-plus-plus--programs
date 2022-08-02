#include<iostream>
using namespace std;

class demo				
{
	public:
	int i;
	protected:
	int j;
	private:
	int k;
	
	public:
	demo()
	{
		i=10;
		j=20;
		k=30;
		
	}
	
	friend void fun();
};

void fun()
{
	demo obj1;
	cout<<obj1.i<<"\n";
	cout<<obj1.j<<"\n";
	cout<<obj1.k<<"\n";
}
int main()
{
	fun();
	return 0;
}