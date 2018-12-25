// This program demonstrates passing struct (by value) and returning struct
#include <iostream>
using namespace std;

const int SCORES = 3;
struct Stud
{int ID; double scores[SCORES]; bool pass;};

void display(Stud);
Stud input(Stud);

int main()
{
	// variables
	Stud s1 = {0};
	double sum=0;
	// input
	s1 = input(s1);	
	// processing
	for(int i=0; i<SCORES; i++)
		sum += s1.scores[i];
	if((sum)>=(SCORES*50))
		s1.pass = 1;
	// output
	display(s1);
	cout<<s1.ID<<endl; // should not be affected by any changes variable s in function display

	return 0;
} // end main
Stud input(Stud s)
{ 
	cout<<"Enter students ID: "; cin>>s.ID;
	cout<<"Enter students scores: ";
	for(int i =0; i<SCORES; i++)
		cin>>s.scores[i];
	return s;
} // end input
void display(Stud s)
{
	cout<<"ID\tScores\t\tStatus\n";
	cout<<s.ID<<"\t";
	for(int i =0; i<SCORES; i++)
		cout<<s.scores[i]<<" ";
	if(s.pass)
		cout<<"\tPassed\n";
	else
		cout<<"\tFailed\n";
	s.ID = 3; // should NOT affect the variable s1 in main
} // end display