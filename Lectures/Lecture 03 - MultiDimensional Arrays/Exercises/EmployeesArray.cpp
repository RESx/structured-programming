// This program takes calculates the net (take-home) pay for an employee after tax deductions
//given the number of hours he worked and hid dependents
#include <iostream>
using namespace std;
#define uDues 10.0 // union dues
void main()
{
	const int numEmployees=1;
	int hrsWorked[numEmployees];
	int dep[numEmployees];
	double netPayments[numEmployees];
	
	for(int i=0;i<numEmployees;i++)
	{
	// variables
	double const rate = 16.78;
	int const normalRatehours  = 40;

	double ssTax, // social security tax
		  fiTax, // federal income tax
		  siTax, // state income tax
		  healthIn = 0; // health insurance 
	double grossPay;// deserved salary according to working hours and rate		  
	
	
	//optional to make only 2 decimal points in the output of double number
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	// input
	cout<<"Hours worked per week: "; cin>>hrsWorked[i];
	cout<<"Number of dependents: "; cin>>dep[i];
	
	// processing
	if(hrsWorked[i]<=normalRatehours)
		grossPay = hrsWorked[i]*rate;
	else
	{
		grossPay = normalRatehours*rate;
		double extraRate=1.5*rate;
		//if(hrsWorked[i]>normalRatehours)
		//{
			int extraHrs=hrsWorked[i]-normalRatehours;
		
			grossPay+= extraHrs*extraRate; //deserved salary
		//}
	}
	//taxes
	ssTax = grossPay*6.0/100;
	fiTax = grossPay*14.0/100;
	siTax = grossPay*5.0/100;
	
	
	//taxes
	if(dep[i]>=3)
		healthIn = 35;

	netPayments[i] = grossPay -(ssTax+fiTax+siTax+uDues+healthIn); // take-home payment

	// outputs
	cout<<"***************Emplpoyee#"<<i+1<<"**********\n";
	cout<<"*************Taxes***************\n";
	cout<<"Gross pay: $"<<grossPay<<"$"<<endl;
	cout<<"Social security tax: "<<ssTax<<"$"<<endl;
	cout<<"Federal income tax: "<<fiTax<<"$"<<endl;
	cout<<"State income tax: "<<siTax<<"$"<<endl;
	cout<<"Union dues: "<<uDues<<"$"<<endl;
	cout<<"Health Insurance <Optional>: " <<healthIn<<"$"<<endl;
	cout<<"**********Net Pay****************\n";
	cout<<"Net pay: "<<netPayments[i]<<"$\n********************************"<<endl;
	
	}
	
} // end main