#include<iostream>
using namespace std;


void srcCpy(char *src,char *dest)
{
	
	while(*src!='\0')
	{
		*dest=*src; 
		src++;
		dest++;
		
	}
	*dest!='\0';
	
}


int main()
{ 
	
	char arr[30];
	char brr[30];
	
	printf(" Enter string ");
	scanf("%[^'\n']s",arr);

	srcCpy(arr,brr);
	
	printf(" after modification %s ",brr);
	
	return 0;
	
}