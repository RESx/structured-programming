// This program takes calculates the net (take-home) pay for an employee after tax deductions
//given the number of hours he worked and hid dependents
#include <iostream>
using namespace std;
#define uDues 10.0 // union dues
void main1()
{
	const int numEmployees=5, info=4; //hrs worked,dep,total taxes,netpayments
	double companyEmps[numEmployees][info]={0};
	// variables
	double const rate = 16.78;
	int const normalRatehours  = 40;

	double ssTax, // social security tax
		  fiTax, // federal income tax
		  siTax, // state income tax
		  healthIn; // health insurance 
	 double grossPay;
	//optional to make only 2 decimal points in the output of double number
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	for(int i=0;i<numEmployees;i++)
	//	for(int j=0;j<info;j++) //no need for inner loop ;-)
	{
		cout<<"Emp#"<<i+1<<":\n";
		// input
		cout<<"Hours worked per week: "; cin>>companyEmps[i][0];
		cout<<"Number of dependents: "; cin>>companyEmps[i][1];;
		//re-initalize neccessary variables for each new emplpoyee
		healthIn=0;
		companyEmps[i][2]=0;
		
		// processing
		if(companyEmps[i][0]<=normalRatehours)
			grossPay = companyEmps[i][0]*rate;
		else
			grossPay = normalRatehours*rate
				+(companyEmps[i][0]-normalRatehours) *1.5*rate;
		
		//taxes
		ssTax = grossPay*6.0/100;
		fiTax = grossPay*14.0/100;
		siTax = grossPay*5.0/100;
	
	
		//taxes
		if(companyEmps[i][1]>=3)
			healthIn = 35;
		companyEmps[i][2]=ssTax+fiTax+siTax+uDues+healthIn;
		companyEmps[i][3] = grossPay -companyEmps[i][2];
		
	}
	char choice;
	cout<<"Clear Screen? (y/n)\n";
	cin>>choice;
	if(choice=='y')
		system("cls");
	cout<<"Salaries Sheet\n";
	cout<<"E#\tHrs\tDep\tTaxes\tNet Salary\n";
	for(int i=0;i<numEmployees;i++)
	{
		cout<<i+1<<"\t";
		for(int j=0;j<info;j++) //no need for inner loop ;-)
		{
			
			cout<<companyEmps[i][j]<<"\t";
		}
		cout<<endl;
	}
	
} // end main