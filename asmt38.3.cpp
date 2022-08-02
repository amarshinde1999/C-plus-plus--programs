#include<iostream>
using namespace std;

int Strlen(char *str)
{
	static int iCnt=0;
	
	
		if(*str!='\0')
		{
			iCnt++;
			str++;
			Strlen(str);
		}
	
	return iCnt;
}

int main()
{
	
	int iRet=0;
	char arr[20];
	
	printf("enter string : ");
	scanf("%s",arr);
	
	iRet=Strlen(arr);
	
	printf("%d",iRet);
	
	return 0;
}