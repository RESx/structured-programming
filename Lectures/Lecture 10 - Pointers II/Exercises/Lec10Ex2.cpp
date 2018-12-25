// This program demonstrates dynamic arrays of struct
#include <iostream>
using namespace std;
void fillArray(Std* studs,int size);
void ComputeAvgofAll(Std* studs,int size);
void ComputeAvgofOneStud(double grades[],int size);
void display(Std* studs,int size);

struct Std
{
	int ID;
	char name[20];
	double grades[5];
	double avg;
}; // end of Std

int main()
{
	const int GRADES = 3;
	// variables
	int numStd;
	double sum;
	// input
	cout<<"How many students: ";
	cin>>numStd;
	
	// processing
	// allocate
	Std *students = new Std[numStd];
	//fill data and compute average
	for(int i=0; i<numStd; i++)
	{
		sum = 0.0;
		cout<<"ID: "; cin>>students[i].ID;
		cout<<"Name: "; cin>>students[i].name;
		for(int j=0; j<GRADES; j++)
		{
			cout<<"Subject#"<<j+1<<": ";
			cin>>students[i].grades[j];
			sum += students[i].grades[j];
		} // end for j
		students[i].avg = sum/GRADES;
	} // end for i

	// output
	cout<<"ID\tName\tAverage Score\n";
	for(int i=0; i<numStd; i++)
		cout<<students[i].ID<<"\t"<<students[i].name<<"\t"<<students[i].avg<<endl;

	// dellocate
	delete [] students;
	students=nullptr;

	return 0;
} // end main
void ComputeAvgofAll(Std* studs,int size)
{
	for(int i=0;i<size;i++)
	{
			studs[i]
	}
}
void ComputeAvgofOneStud(double grades[],int size)
{
}