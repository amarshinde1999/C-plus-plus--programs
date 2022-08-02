#include<iostream>
using namespace std;


int FirstChar(char *str,char ch)
{
	int iCnt=1;
	
	
	while(*str!='\0')
	{
		
	 if(*str==ch)
	 {
		return iCnt;
	 }	
	iCnt++;	
	str++;	
		
	}
	return -1;

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
	
	iRet=FirstChar(arr,cValue);
	
	
	printf(" character location is %d :",iRet);
	
	
	return 0;
}