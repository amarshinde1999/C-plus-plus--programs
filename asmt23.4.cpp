#include<iostream>
using namespace std;

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkSpecial(char ch)
{
	if((ch==33)||(ch==64)||(ch==35)||(ch==36)||(ch==37)||(ch==38)||(ch==94)||(ch==42))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	
	
}


int main()
{
	
	char cValue='\0';
	BOOL bRet=FALSE;
	
	
	printf("enter the character ");
	scanf("%c",&cValue);
	
	bRet=ChkSpecial(cValue);
	
	if(bRet==TRUE)
	{
		printf("It is the special character ");
		
	}
	else
	{
		printf("It is not a special character ");
		
	}
	
	
	return 0;
}