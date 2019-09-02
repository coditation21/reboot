int main()
{
	double da[5] = {1.2d,2.3d,3.4d,4.5d,5.6d};
	double * const dp = da;
	
	dp++;
	(*dp)++;
	return 0;
}
