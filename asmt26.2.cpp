#include<iostream>
using namespace std;


int CountChar(char *str,char ch)
{
	int iCnt=0;
	
	while(*str!='\0')
	{
		
	 if(*str==ch)
	 {
		iCnt++;
	 }	
			
	str++;	
		
	}
	
	return iCnt;
}


int main()
{
	
	char arr[20];
	char cValue;
	int iRet=0;
	
	
	printf(" Enter string ");
	cin.getline(arr,20);
	
	printf(" Enter the character ");
	scanf("%c",&cValue);
	
	iRet=CountChar(arr,cValue);
	
	
	printf(" character frequency is %d :",iRet);
	
	
	return 0;
}