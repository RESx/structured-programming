//// This program searches for an element in an array and gets its location if found
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	const int SIZE = 10;
//	// variables
//	int i=0, number, arrayNum[SIZE];// = {1, 2 ,3, 5, 6, 7, 8};
//	
//	// input
//	cout<<"Please enter "<<SIZE<<" integers: ";
//	for(int i=0; i<SIZE; i++)
//		cin>>arrayNum[i];
//
//	cout<<"Enter a number: "; cin>>number;
//
//	// processing
//	// search the array linearly
//	for(i=0; i<SIZE; i++)
//		if(arrayNum[i] == number)
//		{
//			cout<<number<<" is found at location: "<<i+1<<endl;
//			break; // no need to keep looking
//		} // end if
//
//	// output
//	if(i==SIZE)
//		cout<<number<<" is not found.\n";
//
//	return 0;
//} // end main