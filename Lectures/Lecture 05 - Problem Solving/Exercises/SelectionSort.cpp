#include <iostream>
using namespace std;
void main()
{
	int arr[]={5,1,4,2,3};

	cout<<"Original Order:\n";
	for(int i=0;i<5;i++)
		cout<<arr[i]<<"\t";

	cout<<endl;

	//SelectionSort
	//loop on number of positions you want add minimum number in (i.e size of the array)

	for(int currentPosition = 0; currentPosition < 5; currentPosition++) 
	{
	   //find the min index 
		int minIndex = currentPosition;
	   //start searching for min value from the current position
		for(int j = currentPosition ; j < 5 ; j ++)
		{
			if(arr[j] < arr[minIndex])
				minIndex = j;
		}
		//swap step
		int temp = arr[currentPosition];
		arr[currentPosition] = arr[minIndex];
		arr[minIndex] = temp;

	}

	cout<<endl;

	cout<<"Sorted:\n";
	for(int i=0;i<5;i++)
		cout<<arr[i]<<"\t";

	cout<<endl;
}