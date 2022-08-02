#include<iostream>
using namespace std;

float area(float fradious,float fpi=3.14)
{
	float fans=0.0;
	fans=fpi*fradious*fradious;
	return fans;

}

int main()
{
	float fret=0.0;
	
	fret=area(10.4,7.2);
	cout<<fret<<"\n";
	
	fret=area(10.6);
	cout<<fret<<"\n";
		
		
	return 0;
}