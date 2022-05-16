/*
  Binoy Das Gupta
  C++ program to check if any negative number is found through exception handling
  16-05-2022
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int arr[100], size;
	try
	{
		int i;
		cin>>size;
		for(i=0; i<size; i++)
		{
			cin>>arr[i];
		}
		string s = "Negative number exception caught";
		for(i=0; i<size; i++)
		{
			if(arr[i]<0)
			{
				throw s;
			}
		}
	}
	catch(string ex)
	{
		cout<<ex<<endl;
	}
	return 0;
}

/*
10
1 2 3 4 5 6 7 8 9 -10
Negative number exception caught
*/