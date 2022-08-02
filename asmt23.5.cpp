#include<iostream>
using namespace std;



void Display(char ch)
{
	if((ch>='A')&&(ch<='Z'))
	{
		
		{
			printf("Decimal %d :",ch);
			
		}
		
		
		{
			printf("Octal %o:",ch);
			
		}
		
		{
			printf("Hexadecimal %x:",ch);
			
		}
		
		
		
		
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