#include<iostream>
using namespace std;

typedef int BOOL;

void DisplaySchedule(char ch)
{
	if((ch=='a')||(ch=='A'))
	{
		printf("Your exam is at : 7 AM ");
	}
	
	else if((ch=='b')||(ch=='B'))
	{
		printf("Your exam is at : 8.30 AM ");
	}
	
	else if((ch=='c')||(ch=='C'))
	{
		printf("Your exam is at : 9.20 AM ");
	}
	
	else if((ch=='d')||(ch=='D'))
	{
		printf("Your exam is at : 10.30 AM ");
	}
	else
	{
		printf("Invalid Division");
	}
	
}

int main()
{
	
	char cValue='\0';
	
	
	printf("enter the character ");
	scanf("%c",&cValue);
	
	DisplaySchedule(cValue);
	
	
	return 0;
}