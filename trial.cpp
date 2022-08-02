#include<iostream>
using namespace std;

class Demo
{
	int x;
	public:
	int y;
	private:
	int z;
	
	public:
	void fun()
	{
		cout<<"inside void fun\n";
		cout<<z;
	}
	private:
	void gun()
	{
		cout<<"inside void gun\n";
		cout<<y;
		
	}
	
};

int main()
{

	Demo obj;

return 0;
}