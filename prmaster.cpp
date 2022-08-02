#include<iostream>
using namespace std;

class Base
{
    public:
        int x,y;
        Base()
        {
            cout<<"Inside base constructor\n";
        }
        ~Base()
        {
            cout<<"Inside base destructor\n";
        }
        void fun()
        {
            cout<<"Inside base fun\n";
        }
};
class Derived : public Base
{
    public:
        int i,j;
    Derived()
    {
        cout<<"Inside Derived constructor\n";
    }
    ~Derived()
    {
        cout<<"Inside Derived destructor\n";
    }
    void gun()
    {
        cout<<"Inside Derived gun\n";
    }
};

int main()
{
    Derived dobj;
	
	dobj.fun();
	dobj.gun();
	
	cout<<sizeof(Base)<<"\n";
	cout<<sizeof(Derived)<<"\n";
	
	return 0;

}