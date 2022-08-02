 #include<iostream>
using namespace std;

class Demo
{ 
void Callvalue(int no) 
	{
	no++;
	}
void CallAddress(int *p)
	{	
	(*p)++;
	}
void CallReference(int &ref)
	{	
	ref++;
	}
   
};

int main()
{
    
	int a=10, b=20 ,  c=30;
	
	Callvalue(a);
	cout<<a<<"\n";
	
	CallAddress(&b);
	cout<<b<<"\n";
	
	CallReference(c);
	cout<<c<<"\n";
	
    return 0;
}


























