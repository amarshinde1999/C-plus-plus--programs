#include<iostream>
using namespace std;


class amar

{
	public:
	
	int Addition(int ino1, int ino2,int ino3)
	
	{	
		int ans =0;
		ans =ino1+ino2+ino3;
		return ans;
	}
	
	
};

int main()

{
	amar obj;
	int ret=0;
	
	
	ret=obj.Addition(10,11,22);
	cout<<ret<<"\n";
	
	return 0;
}