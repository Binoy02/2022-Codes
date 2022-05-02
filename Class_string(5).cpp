/*
  Binoy Das Gupta
  Write a C++ program to demonstrate the working of string iterator, reverse iterator. 
  //Class string is a class which creates string as object and it uses "string" keyword to 
  create that object and no other data type is needed when user uses string class.//
  02-05-2022
*/

#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
	string str; //for string class
	cout<<"Input string : ";
	getline(cin,str); //taking input for string class
	cout<<"The initial string is : "<<str;
	cout<<"\n\n";
	
	//iterator 
	string::iterator it;
	cout<<"The string after iterator operation is : ";
	for(it = str.begin(); it!=str.end(); it++)
	{
		cout<<*it; //Since iterator acts like a pointer and does its work
	}
	
	cout<<"\n\n";
	
	//reverse iterator
	string::reverse_iterator it1;
	cout<<"The string after reverse iterator operation is : ";
	for(it1 = str.rbegin(); it1!=str.rend(); it1++)
	{
		cout<<*it1;
	}
	
	cout<<"\n\n";
	return 0;
}

/*
Input string : Binoy
The initial string is : Binoy

The string after iterator operation is : Binoy

The string after reverse iterator operation is : yoniB
*/