#include<iostream>

int main()
{

	const long* l1;
	long const* l2;
	long a[5] = {1L,2L,3L,4L,5L};
	l1=&a[0];
	++l1;
	//++(*l1);
	a[4]=7L;
	for(int i=0;i<5;i++)
		std::cout<<" "<<a[i];
	return 0; 
}
