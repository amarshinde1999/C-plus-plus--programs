#include<iostream>
using namespace std;

void DisplayDigit(char *str)
{
	
	while(*str!='\0')
	{
		if(*str>='0' && *str<='9')
		{
			printf("%c",*str);
		}
		else
		{
			return;
		}
		
		str++;
	}
	
	
}

int main()
{
	
	char arr[20];
	printf(" Enter string ");
	scanf("%[^'\n']s",arr);
	
	DisplayDigit(arr);
	
	
	
	return 0;
}