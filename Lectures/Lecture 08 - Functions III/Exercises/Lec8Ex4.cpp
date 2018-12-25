// This program demonstrates passing by reference
// Computing sum, average, max, and min of three numbers
#include <iostream>
using namespace std;

int compute(int, int, int, double&, int&, int&);

int main()
{
	// variables
	int n1, n2, n3, sum, min, max;
	double average;
	
	// input
	cout<<"Enter three numbers: ";
	cin>>n1>>n2>>n3;

	// processing
	sum = compute(n1, n2, n3, average, min, max);
	// output
	cout<<"Sum: "<<sum<<endl;
	cout<<"Average: "<<average<<endl;
	cout<<"Minimum: "<<min<<endl;
	cout<<"Maximum: "<<max<<endl;

	return 0;
} // end main

int compute(int a, int b, int c, double& avg, int& min, int& max)
{	
	avg = (a+b+c)/3.0;
	if(a>b)
	{
		if(a>c)
		{
			max = a;
			if(b>c)
				min = c;
			else
				min = b;
		}
		else
		{
			max = c;
			min = b;
		}
	}
	else
	{
		if(b>c)
		{
			max = b;
			if(a>c)
				min = c;
			else
				min = a;
		}
		else
		{
			max = c;
			min = a;
		}
	}
	return a+b+c;
} // end compute
