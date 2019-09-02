#include<iostream>
#include<ctime>

int main()
{
	const time_t timeOne = time(NULL);
	char* tm = ctime(&timeOne);
	
	std::cout<<"Today is : "<<tm;

	timeOne = time(NULL);
	char* tm2 = ctime(&timeOne);
	std::cout<<"Today is : "<<tm2;
	
	return 0;
}
