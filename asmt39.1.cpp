#include<iostream>
using namespace std;


int WhiteSpaces(char *str)
{
	static  int iCnt=0;
	
	if(*str!='\0')
	{
		if(*str==' ')
		{
			iCnt++;
		}
		str++;
		WhiteSpaces(str);
	}
	
		return iCnt;
	
}


int main()
{
	char arr[30];
	int iRet=0;
	
	
	printf("enter string : ");
	scanf("%[^'\n']S",arr);
	
	iRet=WhiteSpaces(arr);
	
	printf("%d",iRet);
	
	return 0;
}