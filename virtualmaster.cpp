#include<iostream>
using namespace std;

class base
{
	public:
	int x,y;
	
	int Add(int a,int b)
	{
		return=a+b;
	}
	
	virtual int Sub(int a,int b)=0;
	
	
};

class derived:public Base
{
	public:
	int i,j;
	
	int sub(int a,int b)
	{
		return=a-b;
	}  

};
int main()
{
	base *bp=new Deived();
	
	
	ret=0;
	ret=bp->sub(11,21);
	cout<<ret<<"\n";



	
	return 0;



}