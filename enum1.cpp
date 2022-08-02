#include<iostream>
using namespace std;



int main()
{
enum Days  {sun,mon,tue,wed,thus,fri,sat};

enum Days obj;

obj=tue;

cout<<obj<<"\n";
cout<<sizeof(obj)<<"\n";

enum gender{female=1,male=2};
cout<<"enter your gender\n";
cout<<"1:female\n";
cout<<"2:male\n";

cin(input)

switch(input)
{
	case female:
	cout<<"tax free limit 300000\n";
	break;
	
	case male:
	cout<<"tax free limit 250000\n";
	break;
	
	default:
	cout<<"invalid gender\n";
	break;
}
	return 0;
}