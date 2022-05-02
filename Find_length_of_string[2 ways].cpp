/*
  Binoy Das Gupta
  C++ program to find length of a string 
  (i) without using string iterator;
  (ii) using string iterator;
  02-05-2022
*/

#include<bits/stdc++.h>
#include<string.h>
#include<string> //string class header file
using namespace std;

int main()
{
	//(i)
	char str1[100];
	cout<<"First string is : ";
	cin.getline(str1,100);
	
	int i = 0, length1 = 0;
	for(i=0; str1[i]!='\0'; i++)
	{
		length1++;
	}
	cout<<"The length of first string is : "<<length1<<endl;
	
	cout<<"\n";
	
	//(ii)
	string str2;
	cout<<"Second string is : ";
	getline(cin,str2);
	
	string::iterator it;
	int length2 = 0;
	for(it = str2.begin(); it!=str2.end(); it++)
	{
		length2++;
	}
	cout<<"The length of second string is : "<<length2<<endl;
	return 0;
}

/*
First string is : Binoy Das
The length of first string is : 9

Second string is : Ratan Das
The length of second string is : 9
*/