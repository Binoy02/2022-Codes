/*
  Binoy Das Gupta
  Write a C++ program to find elements using linear search
  24-04-2022
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a[100];
	int i,size;
	
	cout<<"Enter size of array : ";
	cin>>size;
	
	cout<<"Enter elements of array : ";
	for(i=0; i<size; i++)
	{
		cin>>a[i];
	}
	
	int search_ele,count,pos;
	cout<<"Enter the element to be searched : ";
	cin>>search_ele;
	count = 0;
	for(i=0; i<size; i++)
	{
		if(search_ele == a[i])
		{
			pos = i+1;
			count++;
			break;
		}
	}
	
	if(count == 0)
		cout<<" "<<search_ele<<"is not found."<<endl;
	else 
		cout<<search_ele<<" is found at position "<<pos<<"."<<endl;
		
	return 0;
}