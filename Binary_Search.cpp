/*
  Binoy Das Gupta
  Write a C++ program to search an element using Binary Search
  25-04-2022
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a[100];
	int size,i,search_ele;
	
	cout<<"Size of the array is = ";
	cin>>size;
	
	cout<<"Elements of array are = ";
	for(i=0; i<size; i++)
	{
		cin>>a[i];	
	}
	
	cout<<"Element to be searched = ";
	cin>>search_ele;
	
	int low=0, high=size-1, mid, count = -1;
	while(low<=high)
	{
		mid = (low+high)/2;
		if(search_ele == a[mid])
		{
			cout<<search_ele<<" is found at "<<mid<<endl;
			count++;
			break;
		}
		else if(search_ele < a[mid])
			high = mid-1;
		else
			low = mid+1;
	}
	
	if(count == -1)
	{
		cout<<search_ele<<" is not found."<<endl;
	}
	return 0;
} 