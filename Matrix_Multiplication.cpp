/*
  Binoy Das Gupta
  Write a C++ program to multiply two matrices
  24-04-2022
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a[100][100], b[100][100];
	int r1,c1,r2,c2,i,j,k;
	
	cout<<"Enter rows and columns for First matrix : ";
	cin>>r1>>c1;
	cout<<"Enter rows and columns for Second matrix : ";
	cin>>r2>>c2;
	
	while(c1!=r2)
	{
		cout<<"Error!Column of first matrix is not equal to second matrix."<<endl;
		
		cout<<"Enter rows and columns for First matrix : ";
		cin>>r1>>c1;
		cout<<"Enter rows and columns for Second matrix : ";
		cin>>r2>>c2;	
	}
	
	cout<<endl;
	cout<<"Enter elements of first matrix : "<<endl;
	for(i=0; i<r1; i++)
	{
		for(j=0; j<c1; j++)
		{
			cin>>a[i][j];
		}
	}

	cout<<endl;
	cout<<"Enter elements of second matrix : "<<endl;
	for(i=0; i<r2; i++)
	{
		for(j=0; j<c2; j++)
		{
			cin>>b[i][j];
		}
	}
	
	int mul[100][100];
	for(i=0; i<r2; i++)
	{
		mul[i][j] = 0;
		for(j=0; j<c1; j++)
		{
			for(k=0; k<c1; k++)
			{
				mul[i][j]+=a[i][k]*b[k][j]; 
			}
		}
	}	
	
	cout<<"Multiplied matrix : "<<endl;
	for(i=0; i<r2; i++)
	{
		for(j=0; j<c1; j++)
		{
			cout<<mul[i][j]<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}