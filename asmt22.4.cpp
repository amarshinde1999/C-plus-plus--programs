#include<iostream>
using namespace std;

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSmall(char ch)
{
	

	if((ch>='a')&&(ch<='z'))
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
	
	bRet=ChkSmall(cValue);
	
	if(bRet==TRUE)
	{
		printf("It is small case character");
	}
	else
	{
		printf("it is not a small case character");
	}
	return 0;
}