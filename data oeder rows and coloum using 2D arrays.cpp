#include<iostream>
using namespace std;
int main()
{
	int row=4;
	int coloum=3;
	int matrix[row][coloum];
	for(int i=0;i<row;i++)
	for(int j=0;j<coloum;j++)
	{
		cout<<"enter data for row"<<i<<"and coloum"<<j<<endl;
		cin>>matrix[i][j];
	}
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<coloum;j++)
		{
			cout<<matrix[i][j]<<"\t";
		}
		cout<<endl;
	}
}
