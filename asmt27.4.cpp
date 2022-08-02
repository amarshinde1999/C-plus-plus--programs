#include<iostream>
using namespace std;


void StrCpySmall(char *src,char *dest)
{
	
	while(*src!='\0')
	{
		if((*src>='a')&&(*src<='z'))
		{
			*dest=*src;
			dest++;
			
			
		}
		src++;
	}
	
	*dest='\0';
}


int main()
{ 
	
	char arr[30]=" Marvellous Multi OS ";
	char brr[30];
	
	printf(" Enter string ");
	scanf("%[^'\n']s",arr);

	StrCpySmall(arr,brr);
	
	printf(" after modification %s ",brr);
	
	return 0;
	
}