#include<iostream>
using namespace std;

class Demo
{
	public:
	int i;
	
	const int j;
	
	Demo():j(20)
	{                  // meber initialization
		 i=10;
		// j=20;
	}
};

int main()
{
	Demo obj;
	cout<<obj.j<<"\n";
	cout<<obj.i<<"\n";
	
	return 0;
}