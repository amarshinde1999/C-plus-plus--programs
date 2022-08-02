#include<iostream>
using namespace std;


class Demo
{
	public:
	int Addition(int ino1,int ino2)
	{	int ans = 0;
		ans= ino1+ino2;
		return ans;
		
	
	}
	int Addition(int ino1,int ino2,int ino3)
	{
		int ans = 0;
		ans= ino1+ino2;
		return ans;
	}
	int Addition(int ino1,int ino2,int ino3,int ino4)
	{
		int ans = 0;
		ans= ino1+ino2+ino3+ino4;
		return ans;
	}
};

int main()
{
	Demo obj;
	int ret= 0;
	
	ret= obj.Addition(10,11);
	cout<<ret<<"\n";
	
	ret= obj.Addition(10,11,12);
	cout<<ret<<"\n";
	
	ret= obj.Addition(10,11,12,13);
	cout<<ret<<"\n";
	
	
	
	return 0;
}


