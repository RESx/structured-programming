#include <iostream>
using namespace std;
#define nSubjects 3
struct Date
{
	int day;
	int month;
	int year;
};
struct stud
{
	int id;
	Date DOB;
	float grades[nSubjects];
	float avg;
	char state;
};
void main5()
{
	const int nStuds=3;
	stud studs[nStuds];
	float sum=0.0;
	for(int i=0;i<nStuds;i++)
	{
		sum=0.0;
		cout<<"S#"<<i+1<<" info:\nid:";
		cin>> studs[i].id;
		cout<<"\nS#"<<i+1<<" DOB:\nday:";
		cin>>studs[i].DOB.day;
		cout<<"\nmonth:";
		cin>>studs[i].DOB.month;
		cout<<"\nyear:";
		cin>>studs[i].DOB.year;
		
		cout<<"Enter S#"<<i+1<<" "<<nSubjects<<" grades\n";
		for(int j=0;j<nSubjects;j++)
		{
			cin>>studs[i].grades[j];
			sum+=studs[i].grades[j];
		}
		studs[i].avg=sum/nSubjects;
		if(studs[i].avg>=50)
			studs[i].state='p';
		else 
			studs[i].state='f';
		
	}
	cout<<"Id\tDOB\t\tAvg\tState\n";
	for(int i=0;i<nStuds;i++)
		//output
			cout<<studs[i].id<<"\t"<<studs[i].DOB.day<<"/"<<studs[i].DOB.month<<"/"<<studs[i].DOB.year<<"\t"
			<<studs[i].avg<<"\t"<<studs[i].state<<endl;

}