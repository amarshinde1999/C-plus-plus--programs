#include<iostream>
using namespace std;


template<class T>
int SearchLast(T *Arr,int iSize,T iNo)
{
	
	int iCnt=0;
	for(int i=(iSize-1); i>=0; i--)
	{
		iCnt++;
		if(Arr[i]==iNo)
		{
			break;
		}
		
	}
	return iCnt;
	
} 


int main()
{
	int arr[]={10,20,30,10,30,40,10,40,10};
	
	int iRet=SearchLast(arr,9,40);
	
	printf("%d",iRet);

	
	
	return 0;
}


