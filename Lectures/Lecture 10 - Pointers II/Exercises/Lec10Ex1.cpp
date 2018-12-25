// This program demos 2D dynamic arrays
#include <iostream>
#include <string>
using namespace std;

int main()
{
	// variables
	int rows,cols;

	// input
	cout<<"rows: "; 
	cin>>rows;//4
	cout<<"cols: ";
	cin>>cols;//3

	// 2D dynamic allocation
	int ** arr = new int*[rows]; 
	// 1. create 1D dynamic array of pointers
	// 2. with each of these pointer, dynamically create a row
	for(int i=0; i<rows; i++)
	{
		//	cin>>cols;  
		// this enbles you to create columns of different sizes
		arr[i] = new int[cols];
	} // end for i
	
	// input
	for(int i=0; i<rows; i++)
		for(int j=0; j<cols; j++)
			cin>>arr[i][j];

	// display
	cout<<endl;
	for(int i=0; i<rows; i++)
	{	for(int j=0; j<cols; j++)
			cout<<arr[i][j]<<"\t";
		cout<<endl;
	} // end for i


	// de-allocation
	for(int i=0; i<rows; i++) // de-allocated each row even for different columns sizes
		delete []arr[i];
	
	delete []arr;  // de-allocated dynamic array of pointers
	arr=NULL;
} // end main