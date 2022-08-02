#include<iostream>
using namespace std;

typedef int BOOL;
#define TRUE 1
#define FALSE 0

int ChkVowel(char *str)
{
	while(*str!='\0')
	{
		if((*str=='a')||(*str=='e')||(*str=='i')||(*str=='o')||(*str=='u'))
		{
			return 1;
		}
		str++;
	}
		return 0;
}

int main()
{
	
	char arr[20];
	BOOL bRet=FALSE;
	
	printf("Enter string");
	scanf("%[^'\n']s",arr);
	
	bRet=ChkVowel(arr);

	if(bRet==TRUE)
	{
		printf(" Contains Vowells ");
	}
	else
	{
		printf(" There is no Vowells ");
	}
	
	
	return 0;
}

