#include<iostream>
using namespace std;


int main()
{
	struct demo
	{
		int no1;
		int no2;
	};
	





typedef struct demo DEMO;
typedef struct demo* PDEMO;
typedef struct demo ** PPDEMO;


//struct demo obj;
DEMO obj;

//struct demo *p=&obj;
PDEMO p=&obj;

//struct demo**q=&p;
PPDEMO q=&p;



return 0;
}

