#include<iostream>
using namespace std;


void StrCpyRev(char *src,char *dest)
{
	
	
	char *dest=srr;
	char temp; 
	
	
	while(*src!='\0')
	{
		src++;
	}
	
	while(src<dest)
	{
		temp=*src;
		*src=*dest;
		*dest=temp;
		
		src++;
		dest--;
		
	}
	
}


int main()
{ 
	
	char arr[30]=" Marvellous Infosystems ";
	char brr[30];
	

	StrCpyRev(arr,brr);
	
	printf("after modification %s ",brr);
	
	return 0;
	
}