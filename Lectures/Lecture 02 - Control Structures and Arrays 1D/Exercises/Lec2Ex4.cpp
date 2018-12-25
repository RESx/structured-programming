//// This program finds the minimum and maximum of ten integers
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	const int SIZE = 10;
//	// variables
//	int arrayNum[SIZE] = {0}, max, min;
//	
//	// input
//	cout<<"Please enter "<<SIZE<<" integers: ";
//	for(int i=0; i<SIZE; i++)
//		cin>>arrayNum[i];
//
//	// processing
//	max = arrayNum[0]; // assume the first element is the max and min
//	min=arrayNum[0];
//	for(int i=0; i<SIZE; i++)
//	{
//		if(arrayNum[i]>max)
//			max = arrayNum[i];
//		else if(arrayNum[i]<min)
//			min = arrayNum[i];
//	} // end for i
//
//	// output
//	cout<<"Maximum number: "<<max;
//	cout<<"\nminimum number: "<<min<<endl;
//
//	return 0;
//} // end main