#include<iostream>
using namespace std;

class Demo
{
	public:
	int i;
	
	const int j;
	
	Demo():j(20)
	{                  
		 i=10;
		// j=20;
	}
	
	Demo(int a,int b):i(a),j(b)
	{
		cout<<"inside parametrized\n";
	}
};

int main()
{
	Demo obj(11,21);
	
	cout<<obj.i<<"\n";
	cout<<obj.j<<"\n";
	
	obj.i++;
	cout<<obj.i<<"\n";
	
	//obj.j++;
	
	return 0;
}