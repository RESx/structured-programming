// This program demonstrates recursive functions
// Computing the power with two methods
#include <iostream>
using namespace std;

double my_pow(double, double);

int main()
{
	// variables
	double b, e;
	// input
	cout<<"Enter the base: "; cin>>b;
	cout<<"Enter the exponent: "; cin>>e;
	
	// processing+output
	cout<<b<<" to the power "<<e<<" = "<<my_pow(b,e)<<endl;

	return 0;
} // end main

double my_pow(double base, double expo)
{
	double result = 1;
	for(int i=0; i<expo; i++)
		result = result*base;
	return result;

	if(expo==0)
		return 1;
	else if(expo==1)
		return base;
	else
		return base*my_pow(base, expo-1);
} // end my_pow