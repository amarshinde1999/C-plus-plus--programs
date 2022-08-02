#include<iostream>
using namespace std;

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkDigit(char ch)
{
	

	if((ch>='0')&&(ch<='9'))
	{
	return 1;
	}
	return 0;
	
}

int main()
{
	
	char cValue='\0';
	BOOL bRet=FALSE;
	
	printf("enter the character ");
	scanf("%c",&cValue);
	
	bRet=ChkDigit(cValue);
	
	if(bRet==TRUE)
	{
		printf("It is Digit");
	}
	else
	{
		printf("it is not a Digit");
	}
	return 0;
}