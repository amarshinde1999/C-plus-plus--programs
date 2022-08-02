#include<iostream>
using namespace std;


int Max(int iNo)
{
	int iCnt;
	int iDigit;
	
	while(iNo>0)
	{
		iDigit=iNo%10;
		if(iCnt<iDigit)
		{
			iCnt=iDigit;
		}
		iNo=iNo/10;
	}
	return iCnt;
}


int main()
{
	
	int iValue=0;
	int iRet=0;
	
	printf("enter numbers : ");
	scanf("%d",&iValue);
	
	iRet=Max(iValue);
	
	printf(" Maximum number is  : %d ",iRet);
	
	return 0;
}