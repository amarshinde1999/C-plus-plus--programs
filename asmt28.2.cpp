#include<iostream>
using namespace std;


void StrCpyX(char *src ,char *dest)
{
	int i=0;
	int j=0;
	
	while(*src!='\0')
	{
		if(*src=' ')
		{
			
			
		}
		*dest=*src;
		src++;
		dest++;
	}
	*dest='\0';
}
int main()
{
	char arr[30]="Marvel lous Pyth on";
	char brr[30];
	
	StrCpyX(arr,brr);
	
	printf("%s",brr);
	

	return 0;
}