#include<iostream>
using namespace std;


int LastChar(char *str,char ch)
{
	char *p=str;

	while(*str!='\0')
	{
		str++;
		p++;			
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
	
	iRet=LastChar(arr,cValue);
	
	
	printf(" character location is %d :",iRet);
	
	
	return 0;
}