// This program demonstrates recurive functions
// Seperating digits of a number
#include <iostream>
using namespace std;

void sep(int);

int main()
{
	// variables
	int num;
	// input
	cout<<"Enter a number: "; cin>>num;
	
	// processing+output
	sep(num);

	return 0;
} // end main

void sep(int num)
{
	if(num<10)
		cout<<num<<endl;
	else
	{
		int last_digit = num%10;
		sep(num/10);
		cout<<last_digit<<endl;
	} // end else
} // end sep