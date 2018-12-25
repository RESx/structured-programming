// This program demonstrates void functions
#include <iostream>
using namespace std;

void welcome(int);

int main()
{
	// variables
	// input
	// processing
	cout<<"main\n";
	welcome(2);
	cout<<"after calling\n";
	
	// output

	return 0;
} // end main

void welcome(int repeat)
{
//	return;
	for(int i=1; i<=repeat; i++)
		cout<<"Hi\twelcome to my game!\n";
	
} // end welcome