#include<iostream>


namespace marvellous
{
	void fun()
	{
		std::cout<<"inside fun\n";
	}
}

int main()
{
	std::cout<<"jai ganesh\n";
	marvellous::fun();
	return 0;
}