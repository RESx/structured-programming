// This program determines if three numbers are ordered
#include <iostream>
using namespace std;

bool in_order(int, int, int);

int main()
{
	// variables
	int A, B, C;
	// input
	cin>>A>>B>>C;
	bool check=in_order(A,B,C);
	// processing + output
	if(check)
		cout<<"Numbers are ordered.\n";
	else
		cout<<"Numbers are out of order.\n";

	return 0;
} // end main

bool in_order(int x, int y, int z)
{
	if((x<=y)&&(y<=z))
		return true;
	if((x>=y)&&(y>=z))
		return true;
	return false;
}
 // end in_order