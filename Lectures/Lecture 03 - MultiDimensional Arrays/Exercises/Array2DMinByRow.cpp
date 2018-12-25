#include <iostream>
using namespace std;

void main2()
{
	////method 1, 1 min variable and overwrite
	//const int row=3, col=4;
	//int my2DArray[row][col]={0},min,minCol=-1;//not important to initialize row and col
	//char choice;
	//
	//while(true)
	//{
	//	cout<<"Enter 3x4 matrix:"<<endl;
	//	for(int r=0;r<row;r++)
	//	{
	//		for(int c=0; c<col;c++)
	//		{
	//			cin>>my2DArray[r][c];
	//		}
		//	}
	//
	//	//min=INT_MAX;// my2DArray[0][0]; 
	//			
	//	//minCol=0;
	//	for(int r=0;r<row;r++)
	//	{
	//		min=my2DArray[r][0];
	//		minCol=1; 
	//		for(int c=0; c<col;c++)
	//		{
	//			if(my2DArray[r][c]<min)
	//			{
	//				min=my2DArray[r][c];
	//			
	//				minCol=c+1; 
	//	
	//			}
	//		}
	//		cout<<"Minimum Value in Row "<<r+1<<" is : "<<min<<" found in column: "<<minCol<<endl;
	//	
	//	}
	//	cout<<"Continue (y/n)?\n";
	//	cin>>choice;
	//	if(choice== 'N' || choice=='n')
	//		break;
	//}
	//
	//method 2, save minimums in 1D array to display in tabular form
	const int row=3, col=4;
	int my2DArray[row][col]={0},minimums[row],minCol=-1;
	char choice;
	
	while(true)
	{
		cout<<"Enter 3x4 matrix:"<<endl;
		for(int r=0;r<row;r++)
		{
			for(int c=0; c<col;c++)
			{
				cin>>my2DArray[r][c];
			}
			
		}
	
		//min=INT_MAX;// my2DArray[0][0]; 
				
		
		for(int r=0;r<row;r++)
		{
			minimums[r]=my2DArray[r][0];
			minCol=1; 
			for(int c=0; c<col;c++)
			{
				if(my2DArray[r][c]<minimums[r])
				{
					minimums[r]=my2DArray[r][c];
				
					minCol=c+1; 
		
				}
			}
		}
		//Display
		cout << "Matrix\t\tMin\n";
		for(int r=0;r<row;r++)
		{
			for(int c=0; c<col;c++)
			{
				cout<<my2DArray[r][c]<<" ";
			}
			cout<<"\t"<<minimums[r]<<endl;
		}
		cout<<"Continue (y/n)?\n";
		cin>>choice;
		if(choice== 'N' || choice=='n')
			break;
	}
	
}