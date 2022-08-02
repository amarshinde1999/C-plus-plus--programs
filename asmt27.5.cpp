#include<iostream>
using namespace std;


void StrCatX(char *src,char *dest)
{
	
	while(*src!='\0')
	{
	
		
		
		src++;
	}
	while(*dest!='\0')
	{
		*src=*dest;
		src++;
		dest++;
		
	}
	
	
	
}


int main()
{ 
	
	char arr[50]=" Marvellous Infosystems ";
	char brr[30]=" Logic Building ";
	

	StrCatX(arr,brr);
	
	printf(" after modification %s ",arr);
	
	return 0;
	
}