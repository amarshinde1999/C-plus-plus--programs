#include<stdio.h>
using namespace std;


template<class T>
T Max(T no1,T no2,T no3)
{
	
	if(no1>no2 && no1>no3)
	{
		return no1;
	}
	else if(no2>no1 && no2>no3)
	{
		return no2;
	}
	else
	{
		return no3;
	}
	
}
	



int main()
{
	int number1;
	int number2;
	int  number3;
	int iRet;
	
	printf("enter number first");
	scanf("%d",&number1);
	
	printf("enter number second");
	scanf("%d",&number2);
	
	printf("enter number third");
	scanf("%d",&number3);
	
	iRet=Max(number1,number2 ,number3);
	
	printf("maximum number is : %d",iRet);
	
	
	
	return 0;
}