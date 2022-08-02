#include<iostream>
using namespace std;

int Mult(int iNo)
{
	static int iMult=1;
	int iCnt=1;
	static int iDigit=0;
	
		if(iCnt<iNo)
		{
			iDigit=iNo%10;
			iMult=iMult*iDigit;
			iCnt++;
			iNo=iNo/10;
			Mult(iNo);
		}
	
		return iMult;
	
}


int main()
{
	
	int iValue=0;
	int iRet=0;
	
	printf("enter number");
	scanf("%d",&iValue);
	
	iRet=Mult(iValue);
	
	printf("%d",iRet);
	
	return 0;
}