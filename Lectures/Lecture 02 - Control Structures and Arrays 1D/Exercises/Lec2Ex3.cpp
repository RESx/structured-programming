// This program takes an integer and displays each digit on a separate line
#include <iostream>
using namespace std;

void main()
{
	// variables
	int number, digit; // used in Method 1
	int i = 0, digArray[100] = {0}; // used in Method 2

	// input
	cout<<"Enter a number: "; cin>>number;

	// processing
	
	if(number<10)
		cout<<number<<endl;
	else
	{
		cout<<"Method 1 output:\n";
		while(number>=1)
		{// Method 1: will produce the digit in reverse order
			digit = number%10;
			cout<<digit<<endl;
			number = number/10;
			/******************/
			// Method 2: use an array to store the digits then display them later in correct order
			digArray[i] = digit;
			++i;
		} // end while
	} // end else

	// output array in reverse
	cout<<"\nMethod 2 output:\n";
	for(int j=i-1; j>=0; j--)
		cout<<digArray[j]<<endl;
	cout<<endl;	

	
} // end main