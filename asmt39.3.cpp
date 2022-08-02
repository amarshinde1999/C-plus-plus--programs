#include<iostream>
using namespace std;


int Small(char *str)
{
	static int iCnt=0;
	
	if(*str!='\0')
	{
		if(*str>='a' && *str<='z')
		{
			iCnt++;
		}
		str++;
		Small(str);
	}
	
	return iCnt;
}


int main()
{
	
	char Arr[30];
	int iRet=0;
	
	printf("enter string : ");
	scanf("%[^'\n']s",Arr);
	
	iRet=Small(Arr);
	
	printf(" Small characters are  %d :",iRet);
	
	return 0;
}