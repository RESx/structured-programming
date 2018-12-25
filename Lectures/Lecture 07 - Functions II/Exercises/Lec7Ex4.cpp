// This program demonstrates overloading a function name
#include <iostream>
using namespace std;

double avg(double, double);
double avg(double, double, double);
double avg(int, int);

int main()
{
	// variables
	double A=1, B=2, C=3;
	int    X=1, Y=2, Z=3;
	// input
	
	// processing
	
	// output
	cout<<"integer avg="<<avg(X,Y)<<endl;
	cout<<"double avg="<<avg(A,B)<<endl;
	cout<<"double avg="<<avg(A,B,C)<<endl;
	
	return 0;
} // end main

double avg(int n1, int n2)
{
	return (n1+n2)/2.0;
} // end int avg
double avg(double n1, double n2)
{
	return (n1+n2)/2.0;
} // end double avgx2
double avg(double n1, double n2, double n3)
{
	return (n1+n2+n3)/3.0;
} // end double avgx3