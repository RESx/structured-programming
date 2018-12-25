#include <iostream>
using namespace std;
void main()
{
	int arr[]={5,1,4,2,3};
	int temp;
	bool swapped = false;

	cout<<"Original Order:\n";
	for(int i=0;i<5;i++)
		cout<<arr[i]<<"\t";

	cout<<endl;

	//Bubble Sort
	do
	{
	   
		swapped=false;
		for(int j = 0 ; j <4 ; j ++)
		{
			//swap step
			//compare 2 by 2	then swap and turn flag

			if(arr[j]>arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				swapped=true;
			}
		}
		

	}while(swapped);

	cout<<endl;

	cout<<"Sorted:\n";
	for(int i=0;i<5;i++)
		cout<<arr[i]<<"\t";

	cout<<endl;
}