// This program demonstrates recursive functions
// Computing the factorial of a number
#include <iostream>
using namespace std;
int factorialIterative(int);
int factorialRecursive(int);
void main()
{
	// variables
	int num;
	// input
	cout<<"Enter a number: ";
	cin>>num;
	// processing+output
	cout<<"Factorial("<<num<<") by iteration = "<<factorialIterative(num)<<endl;
	cout<<"Factorial("<<num<<") by recursion = "<<factorialRecursive(num)<<endl;	
} // end main
int factorialIterative(int n)
{
	int f=1;
	for(int i=2;i<=n;i++)
		f*=i;
	return f;
}
int factorialRecursive(int n)
{
	if(n==1)
		return 1;
	else
		return n*factorialRecursive(n-1);
} // end factorial