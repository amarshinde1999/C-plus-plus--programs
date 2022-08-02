#include<iostream>
using namespace std;

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkCapital(char ch)
{
	

	if((ch>='A')&&(ch<='Z'))
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
	
	bRet=ChkCapital(cValue);
	
	if(bRet==TRUE)
	{
		printf("It is capital character");
	}
	else
	{
		printf("it is not a capital character");
	}
	return 0;
}