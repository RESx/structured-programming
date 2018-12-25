#include <iostream>
using namespace std;

int main()
{
	//Distance struct that we have seen before!
	struct car
	{
	char model[15];
	int nProblems;
	int pNo, pType[5];
	float sTime;
	float cost;
	};
	const int size=3;
	car c[size];//={"Hyundai",3,12345,{1,2,3}};
	cout<<"Welcome to Car Service Program\n";
	for(int i=0;i<size;i++)
	{
		c[i].sTime=0;
		cout<<"Enter Car # "<<i+1<<" info:";
		cout<<"\nmodel  PlateNo nProblems to be fixed (Max 5):\n";
		cin>>c[i].model>>c[i].pNo>>c[i].nProblems;
		
		for(int j=0;j<c[i].nProblems;j++)
		{
			cout<<"Problem # "<<j+1 << " type (1:simple, 2: moderate, 3:severe): \n";
			cin>>c[i].pType[j];
			switch (c[i].pType[j])
			{
			case 1:
				c[i].sTime+=0.5;
				break;
			case 2:
				c[i].sTime+=2;
				break;
			case 3:
				c[i].sTime+=5;
				break;

				}
		}

	c[i].cost=50*c[i].sTime;
	}
	cout<<"Model\tPlate No\tTime\tCost\n";
		for(int i=0;i<size;i++)
			cout<<c[i].model<<"\t"<<c[i].pNo<<"\t\t"<<c[i].sTime<<"\t"<<c[i].cost<<"$"<<endl;

}
