#include <iostream>
using namespace std;
void main()
{
//int x=5, result1, result2;
//result1 = (x++) * 2; 	//?
//cout<<"Result="<<result1<<"\nx="<<x<<endl;
//x=5;
//result2= (++x) *2;	//?
//cout<<"Result="<<result2<<"\nx="<<x<<endl;

//	int x= 0; // Boolean false		
//int y = 1; // Boolean true		
//int z = 3; // Boolean true		
//int sum= x+y; //Boolean true
//y--; // Boolean false
//bool test=z-- >=3;
//cout<<test;
//test=6==x+7;
//cout<<test;
//test=sum==x+y;
//cout<<test;
	/*double num=75.67;
	cout<<num;
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(1);
	cout<<endl<<num<<endl;
*/
		// variables
	int number;
	
	// input
	cout<<"Enter a number: ";
	cin>>number;

	// output
	cout<<"Number\tSquare\tPredecessor\tSuccessor\n";
	cout<<number<<"\t"<<number*number<<"\t"<<number-1<<"\t"<<number+1<<endl<<endl;
	
	

}