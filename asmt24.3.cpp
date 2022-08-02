#include<iostream>
using namespace std;

int Difference(char *str)
{
	int iCnt=0;
	int iCnt1=0;
	
	while(*str!='\0')
	{
		if(*str>='a' && *str<='z')
		{
			iCnt++;
		}
		
		if(*str>='A' && *str<='Z')
		{
			iCnt1++;
		}
		
		str++;
	}
	return iCnt-iCnt1;
	
	
}

int main()
{
	
	char arr[20];
	int iRet=0;
	
	printf(" Enter string ");
	scanf("%[^'\n']s",arr);
	
	iRet=Difference(arr);
	
	printf("%d",iRet);
	
	
	
	return 0;
}