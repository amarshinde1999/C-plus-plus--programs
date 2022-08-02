#include<iostream>
using namespace std;


void StrRevX(char *str)
{
	
	char *p =str;
	char *q =str;
	char temp;
	
	while(*q!='\0')
	{
		q++;
	}
	q--;
	
	while(p<q)
	{
		temp=*p;
		*p=*q;
		*q=temp;
		
		p++;
		q--;
	}
	
	
}


int main()
{
	
	char arr[20];
	
	printf(" Enter string ");
	scanf("%[^'\n']s",arr);

	
	StrRevX(arr);
	printf("Modified string is %s",arr);
	
	return 0;
	
}