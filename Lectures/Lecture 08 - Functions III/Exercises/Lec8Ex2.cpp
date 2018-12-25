// This program demonstrates passing arrays
#include <iostream>
using namespace std;

const int SCORES = 3;

void display(int[]);
void myFun(int[]);

int main()
{
	// variables
	int scores[SCORES] = {0};
	// input
	
	// processing
	display(scores);
	myFun(scores);
	display(scores);

	return 0;
} // end main

void myFun(int a[])
{
	cout<<a[0]<<endl;
	a[0]++;

//	cout<<"Enter "<<SCORES<<" elements: ";
//	for(int i=0; i<SCORES; i++)
//		cin>>a[i];
} // end input

void display(int a[])
{
	for(int i =0; i<SCORES; i++)
		cout<<a[i]<<" ";
	cout<<endl;
} // end display