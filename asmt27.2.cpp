#include<iostream>
using namespace std;


void StrNCpyX(char *src,char *dest,int iCnt)
{
	
	while((*src!='\0')&&(iCnt!=0))
	{
		*dest=*src;
		src++;
		dest++;
		iCnt--;
	}
	*dest='\0';
	
}


int main()
{ 
	
	char arr[30]=" Marvellous Multi OS ";
	char brr[30];
	
	printf(" Enter string ");
	scanf("%[^'\n']s",arr);

	StrNCpyX(arr,brr,10);
	
	printf(" after modification %s ",brr);
	
	return 0;
	
}