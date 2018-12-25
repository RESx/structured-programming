// This header file contains the implementation of my_pow function

double my_pow(double base, double expo)
{
	double result = 1;
	for(int i=0; i<expo; i++)
		result = result*base;

	return result;
} // end my_pow