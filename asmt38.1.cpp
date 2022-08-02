#include<iostream>
using namespace std;

void Display(int iNo)
{
	static int iCnt=iNo;
	if(iCnt>0)
	{
		printf("%d*\t",iCnt);
		iCnt--;
		Display(iNo);
		
	}
}


int main()
{
	
	int iValue=0;
	printf(" enter number ");
	scanf("%d",&iValue);
	
	Display(iValue);
	
	return 0;
}