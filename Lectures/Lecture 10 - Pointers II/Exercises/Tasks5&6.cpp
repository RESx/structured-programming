/* Tasks 5 and 6
1.Add variable name to the employee and company structs , that can accept a name composed of more than 1 word input by the user. 
2.Create a login function that takes as input the correct password and let the user enter  his password (displayed as stars/astriscks) and returns a boolean variable verifying whether he logged in successfully or not. It should look like this: 
    bool Login(string correctpw) 
3.Create a function that takes as input the gross pay and total taxes and calculates the net salary for each employee. It should look like this: 
    float ComputeNetSalary (float grossPay, float taxes) 
(Extra Bonus)
4.Save the 10 employees information in a text file and name the text file with the company name.
*/
#include <iostream>
#include <string> //new
#include <conio.h> //new 
#include <fstream>
using namespace std;
#define uDues 10.0 // union dues
#define nEmps 3

struct Emp
{
	string name; //new 
	int HrsWorked;
	int nDependents;
	float total_taxes;
	float netSalary;
};
struct Company
{
	string name; //new
	Emp employees[nEmps];
};
bool Login(string correctpw) ;//new
float ComputeNetSalary (float grossPay, float taxes) ; //new
bool SavetoFile(string , Company); //new
void main()
{

	Company c;
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
	bool LoginSuccessfully=Login("Test");//new
	if(LoginSuccessfully)//new
	{
	cout<<"\nEnter company name:"<<endl;
	getline(cin,c.name); //new
		// input
		for(int i=0;i<nEmps;i++)
		{
			
			cout<<"Enter employee name:";
			getline(cin,c.employees[i].name);//new
			cout<<"Hours worked per week: "; 
			cin>>c.employees[i].HrsWorked;
			cout<<"Number of dependents: "; 
			cin>>c.employees[i].nDependents;
			//re-initalize neccessary variables for each new emplpoyee
			healthIn=0;
			c.employees[i].total_taxes=0;
		
			// processing
			if(c.employees[i].HrsWorked<=normalRatehours)
				grossPay =c.employees[i].HrsWorked *rate;
			else
				grossPay = normalRatehours*rate
					+(c.employees[i].HrsWorked-normalRatehours) *1.5*rate;
		
			//taxes
			ssTax = grossPay*6.0/100;
			fiTax = grossPay*14.0/100;
			siTax = grossPay*5.0/100;
	
	
			//taxes
			if(c.employees[i].nDependents>=3)
				healthIn = 35;
			c.employees[i].total_taxes=ssTax+fiTax+siTax+uDues+healthIn;
			c.employees[i].netSalary = ComputeNetSalary( grossPay,c.employees[i].total_taxes); //new
			cin.ignore();// new (added to be able to read new employee name)
		}
		//display
		for(int i=0;i<nEmps;i++)
		{
			//output
			cout<<"Emp# "<<i+1<<":\n";
			cout<<c.employees[i].name<<"\t";
			cout<<c.employees[i].HrsWorked<<"\t"<<c.employees[i].nDependents<<"\t";
			cout<<c.employees[i].total_taxes<<"\t"<<c.employees[i].netSalary<<endl;
		}
		//new for saving
		cout<<"Do you want to save info to file (y/n)?";
		char choice;
		cin>>choice;
		if(choice=='y')
		{
			string fName;
			cout<<"Type the file name (1 word without extension) you want to create: ";
			cin>>fName;
			bool saved=SavetoFile(fName+".txt",c);//new 
			if(saved)
				cout<<"Saved Successfully!\n";
			else
				cout<<"An error occured during saving!\n";
		}
	} //new
	else//new
		cout<<"\nInvalid Login Credentials!"<<endl;//new
} // end main
bool Login(string correctpw) //new
{
	string pw;
	char stars[15];
	int counter=0;
	cout<<"Enter password: ";
	stars[counter]=_getch();
	cout<<"*";
	
	while(stars[counter]!='\r')
	{		
		counter++;
		stars[counter]=_getch();
		cout<<"*";
		
	}
	//getline(cin, pw);
	pw=strtok(stars,"\r"); //take only substring till \r not the whole 15 char
	if(pw.compare(correctpw)==0)
		return true;
	return false;

}
  float ComputeNetSalary (float grossPay, float taxes) //new
  {
	  return grossPay-taxes;
  }
  bool SavetoFile(string path,Company x) //new
  {
	  ofstream file;
	  file.open(path,ios::app);
	  if(file.is_open())
	  {
		  file<<x.name<<endl;
		  for(int i=0;i<nEmps;i++)
		  {
			//output
			file<<"Emp# "<<i+1<<":\n";
			file<<x.employees[i].name<<"\t";
			file<<x.employees[i].HrsWorked<<"\t"<<x.employees[i].nDependents<<"\t";
			file<<x.employees[i].total_taxes<<"\t"<<x.employees[i].netSalary<<endl;
		 }
		
		  file.close();
		  return true;
	  }
	  return false;
  }