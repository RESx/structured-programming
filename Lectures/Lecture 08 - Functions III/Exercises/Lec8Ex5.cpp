// This program demonstrates passing by reference
// Swapping two numbers
#include <iostream>
using namespace std;

void my_swap(int&, int&);

int main()
{
	// variables
	int n1, n2;
	// input
	cout<<"Enter two numbers: ";
	cin>>n1>>n2;
	
	// processing
	cout<<n1<<"\t"<<n2<<endl;
	my_swap(n1, n2);
	cout<<n1<<"\t"<<n2<<endl;

	return 0;
} // end main

void my_swap(int& a, int& b) // 5, 3
{
	a += b;
	b  = a-b;
	a -= b;

} // end swap