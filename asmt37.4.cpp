#include<iostream>
using namespace std;

void Display(int iNo)
{
	 static int iCnt=1;
	 static char ch='A';
	
	if(iCnt<=iNo)
	{
		cout<<ch;
		iCnt++;
		ch++;
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