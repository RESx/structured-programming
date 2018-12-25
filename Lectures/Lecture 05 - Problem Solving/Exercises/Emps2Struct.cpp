//// This program takes calculates the net (take-home) pay for an employee after tax deductions
////given the number of hours he worked and his dependents
//#include <iostream>
//
//using namespace std;
//#define uDues 10.0 // union dues
//#define nEmps 3
//
//struct Emp
//{
//	char name[100];
//	int HrsWorked;
//	int nDependents;
//	float total_taxes;
//	float netSalary;
//};
//struct Company
//{
//	char name[50];
//	Emp employees[nEmps];
//};
//void main()
//{
//
//	Company c;
//	double const rate = 16.78;
//	int const normalRatehours  = 40;
//
//	double ssTax, // social security tax
//
//		fiTax, // federal income tax
//		  siTax, // state income tax
//		  healthIn; // health insurance 
//	 double grossPay;
//	//optional to make only 2 decimal points in the output of double number
//	cout.setf(ios::fixed);
//	cout.setf(ios::showpoint);
//	cout.precision(2);
//	cout<<"Enter company name:"<<endl;
//	cin>>c.name;
//	// input
//	for(int i=0;i<nEmps;i++)
//	{
//		cout<<"Enter employee first name:";
//		cin>>c.employees[i].name;
//		cout<<"Hours worked per week: "; 
//		cin>>c.employees[i].HrsWorked;
//		cout<<"Number of dependents: "; 
//		cin>>c.employees[i].nDependents;
//		//re-initalize neccessary variables for each new emplpoyee
//		healthIn=0;
//		c.employees[i].total_taxes=0;
//		
//		// processing
//		if(c.employees[i].HrsWorked<=normalRatehours)
//			grossPay =c.employees[i].HrsWorked *rate;
//		else
//			grossPay = normalRatehours*rate
//				+(c.employees[i].HrsWorked-normalRatehours) *1.5*rate;
//		
//		//taxes
//		ssTax = grossPay*6.0/100;
//		fiTax = grossPay*14.0/100;
//		siTax = grossPay*5.0/100;
//	
//	
//		//taxes
//		if(c.employees[i].nDependents>=3)
//			healthIn = 35;
//		c.employees[i].total_taxes=ssTax+fiTax+siTax+uDues+healthIn;
//		c.employees[i].netSalary = grossPay -c.employees[i].total_taxes;
//	}
//	for(int i=0;i<nEmps;i++)
//	{
//		//output
//		cout<<"Emp# "<<i+1<<":\n";
//		cout<<c.employees[i].name<<"\t";
//		cout<<c.employees[i].HrsWorked<<"\t"<<c.employees[i].nDependents<<"\t";
//		cout<<c.employees[i].total_taxes<<"\t"<<c.employees[i].netSalary<<endl;
//	}
//} // end main