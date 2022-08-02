#include<iostream>
using namespace std;


template<class T>
int Frequency(T *Arr,int iSize,T iNo)
{
	
	int iCnt=0;
	for(int i=0; i<iSize; i++)
	{
		if(iNo==Arr[i])
		{
			iCnt++;
		}
	}
	return iCnt;
}


int main()
{
	int arr[]={10,20,30,10,30,40,10,40,10};
	
	int iRet=Frequency(arr,9,10);
	
	printf("%d",iRet);

	
	
	return 0;
}


