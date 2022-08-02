#include<iostream>
using namespace std;

class demo
{
	public:
	
	int Add(int no1,int no2);
	
	
	inline int sub(int no1,int no2);

};

int demo::sub(int no1,int no2)
	{
		int ans=0;
		ans=no1+no2;
		return ans;
	}
	
int demo::Add(int no1,int no2)
	{
		int ans=0;
		ans=no1+no2;
		return ans;
	}
	
	
int main()
{
	demo obj;
	
	cout<<sizeof(obj)<<"\n";
	
	int ret=0;
	
	ret=obj.Add(10,11);
	
	cout<<ret<<"\n";
	


return 0;
}

