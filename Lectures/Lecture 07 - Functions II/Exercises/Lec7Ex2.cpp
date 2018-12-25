// This program demonstrates local variables
#include <iostream>

using namespace std;

double sum(double, double, double);

int main()
{
	// variables
	double A, B, C, result;
	// input
//	cin>>A>>B>>C;
	A = 1; B = 2; C = 3;
	// processing
	A++;
	result = sum(A,B,C);
	// output
	
	cout<<endl<<"A in fn main:"<<A<<endl;
	return 0;
} // end main

double sum(double A, double B, double C)
{
	A++;
	cout<<"A in fn sum:"<<A<<endl;
	return A+B+C;
} // end sum
