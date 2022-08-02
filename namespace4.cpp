#include<iostream>


namespace marvellous
{
	void fun()
	{
		std::cout<<"inside marvellous\n";
	}
}

namespace infosystem
{
	void fun()
	{
		std::cout<<"inside infosystem\n";
	}
}
int main()
{
	std::cout<<"jai ganesh\n";
	
	using namespace marvellous;
    infosystem::fun();
	fun()
	
	return 0;
}