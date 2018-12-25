#include <iostream>
using namespace std;

void main1()
{
	const int row=3, col=4;
	int my2DArray[row][col]={0},min,minRow=-1,minCol=-1;//not important to initialize row and col
	cout<<"Enter 3x4 matrix:"<<endl;
	for(int r=0;r<row;r++)
	{
		for(int c=0; c<col;c++)
		{
			cin>>my2DArray[r][c];
		}
		//cout<<endl;
	}
	
	min=my2DArray[0][0]; //or min= very large value
	minRow=0;			
	minCol=0;
	for(int r=0;r<row;r++)
	{
		for(int c=0; c<col;c++)
		{
			if(my2DArray[r][c]<min)
			{
				min=my2DArray[r][c];
				minRow=r+1;
				minCol=c+1; 
				//Do I need a break here like linear search?
			}
		}
	}
	cout<<"Minimum Value in the Matrix is : "<<min<<" found in row: "<<minRow<<" and column: "<<minCol<<endl;
}