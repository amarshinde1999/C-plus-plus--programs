#include<iostream>
using namespace std;

class Demo
{
	public:
	int i,j;
	
	
	void gun()
	{
		cout<<"inside gun\n";  //definition
	}
	
	void fun()
	{
		cout<<"inside fun\n";  //definition
	}
	
	void fun(int no)      // overloading definition
	{
		cout<<"inside fun\n";
	}
};
int main()
{
	return 0;
}