#include<iostream>
using namespace std;

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkAlpha(char ch)
{
	

	if((ch>='A')&&(ch<='Z')||(ch>='a')&&(ch<='z'))
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
	
	bRet=ChkAlpha(cValue);
	
	if(bRet==TRUE)
	{
		printf("It is character");
	}
	else
	{
		printf("it is not a character");
	}
	return 0;
}