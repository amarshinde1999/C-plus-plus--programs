#include<iostream>
using namespace std;

typedef int BOOL;

void Display(char ch)
{
	if((ch>='a')&&(ch<='z'))
	{
		while(ch>='a')
		{
			printf("%c",ch);
			ch--;
		}
	}
	
	else if((ch>='A')&&(ch<='Z'))
	{
		while(ch<='Z')
		{
			printf("%c",ch);
			ch++;
		}
	}
	
	else
	{
		return;
	}
	
}


int main()
{
	
	char cValue='\0';
	
	
	printf("enter the character ");
	scanf("%c",&cValue);
	
	Display(cValue);
	
	
	return 0;
}