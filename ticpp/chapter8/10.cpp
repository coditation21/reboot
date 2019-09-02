int main()
{
	int i = 20;
	const int* const ip = &i;
	++ip;
	++ *ip;
	return 0;
}
