#include<iostream>
using namespace std;


template<class T>
int SearchFirst(T *Arr,int iSize,T iNo)
{
	
	int iCnt=0;
	for(int i=0; i<iSize; i++)
	{
		iCnt++;
		if(iNo==Arr[i])
		{
			break;
		}
	}
	return iCnt;
}


int main()
{
	int arr[]={10,20,30,10,30,40,10,40,10};
	
	int iRet=SearchFirst(arr,9,40);
	
	printf("%d",iRet);

	
	
	return 0;
}


