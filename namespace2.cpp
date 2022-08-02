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
	
	using namespace marvellous;
	
	marvellous::fun();
	return 0;
}