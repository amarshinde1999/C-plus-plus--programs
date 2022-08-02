#include<iostream>
using namespace std;



int main()
{

	enum marvellous_batches{ppa=0,lb=1,lsp=2,python=3};
	int fees[]={15000,16000,17000,18000};
	const float[]={3.5,4.0,3.5,4.5};
	int choice=0;
	
	cout<<"select the batch that you want to join\n";
	cin<<choice;
	
	switch(choice)
	{
		case ppa:
		cout<<"thank you for selecting pre-placement activity batch";
		cout<<"duration is :"<<duration [ppa]<<"\n";
		cout<<"fees are:"<<fees[ppa]<<"\n";
		break;
		
		case lb:
		cout<<"thank you for logic building batch";
		cout<<"duration is :"<<duration [lb]<<"\n";
		cout<<"fees are:"<<fees[lb]<<"\n";
		break;
		
		case lsp:
		cout<<"thank you for selecting lsp batch";
		cout<<"duration is :"<<duration [lsp]<<"\n";
		cout<<"fees are:"<<fees[lsp]<<"\n";
		break;
		
		case default:
		cout<<"there is no any batch";
		
	}

	return 0;
}


