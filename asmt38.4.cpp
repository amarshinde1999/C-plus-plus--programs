#include<iostream>
using namespace std;

int Fact(int iNo)
{
	static int iFact=1;
	static int iCnt=1;
	
	
		if(iCnt<=iNo)
		{
			
			iFact=iFact*iCnt;
			iCnt++;
			Fact(iNo);
		}
	
		return iFact;
	
}

int main()
{
	
	int iValue=0;
	int iRet=0;
	
	printf("enter number");
	scanf("%d",&iValue);
	
	iRet=Fact(iValue);
	
	printf("%d",iRet);
	
	return 0;
}