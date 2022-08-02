#include<iostream>
using namespace std;

#define MAX 10
int main()
{
	typedef int NUMBER;
	typedef char LETTER;
	
	
	NUMBER no =10;
	LETTER ch =M;
	
	cout<<sizeof(no)<<"\n";
	cout<<no;
	cout<<sizeof(ch)<<"\n";
	cout<<ch;

	return 0;
}