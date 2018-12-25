#include <iostream>
using namespace std;

void main3()
{
	const int row=3, col=4;
	int my2DArray[row][col], key,foundRow=-1,foundCol=-1;
	bool found=false;
	char choice='y';
	
	cout<<"Enter 3x4 matrix:"<<endl;
	for(int r=0;r<row;r++)
	{
		for(int c=0; c<col;c++)
		{
			cin>>my2DArray[r][c];
		}
	}
	do
	{
		cout<<"Enter key value you are searching for: ";	
		cin>>key;
		for(int r=0;r<row;r++)
		{
			for(int c=0; c<col;c++)
			{
				if(my2DArray[r][c]==key)
				{
					found=true;
					foundRow=r+1;
					foundCol=c+1;
					break;
				}
			}
		}
		if(found)
			cout<<key<<" is found in the Matrix at row : "<<foundRow<<" and column : "<<foundCol<<endl;
		else
			cout<<key<<" is not found in your Matrix\n";
		
		cout<<"Search again (y/n)?\n";
		cin>>choice;
		
	}while(choice=='Y' || choice=='y');
}