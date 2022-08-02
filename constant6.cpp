#include<iostream>
using namespace std;

class Demo
{
	public:
	
	int i;
	const int j;  //constant character
	
	Demo():j(20)
	{                  
		 i=10;
		cout<<"inside Demo\n";
	}
	
	
	void fun()
	{
		cout<<"inside fun\n";
		i++;   // allowed
		//j++;  not allowed
	}
	
	
	void gun(int a,const int b)const  // constant function/behaviour
	{
		int x=10;
		const int y=20;
		
		
		cout<<"inside gun\n";
		
		//i++;  // not allowed
		//j++;  // not allowed
		
		x++;  //allowed
		//y++;  //not allowed
		
		a++;  //allowed
		//b++;  //not allowed
	}
	
	
	
};

 int main()
{
	Demo obj1(11,21);
	const Demo obj2(11,21);
	
	obj1.fun();
    obj1.gun(10,20);

    obj2.fun();
    obj2.gun(10,20);

	
	
	
	return 0;
}