#include<iostream>
using namespace std;


template<class T>
void Reverse(T *Arr,int iSize)
{
	
	for(int i=(iSize-1); i>=0; i--)
	{
		cout<<" "<<Arr[i];
	}
	
	
} 


int main()
{
	int arr[]={10,20,30,10,30,40,10,40,10};
	
	Reverse(arr,9);
	

	
	
	return 0;
}


