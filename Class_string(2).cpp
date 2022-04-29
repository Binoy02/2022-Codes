/*
  Binoy Das Gupta
  Write a C++ program to demonstrate the working of capacity(), resize() and length(). 
  //Class string is a class which creates string as object and it uses "string" keyword to 
  create that object and no other data type is needed when user uses string class.//
  30-04-2022
*/

#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
	string str; //for string class
	cout<<"Input string : ";
	getline(cin,str); //taking input for string class
	cout<<"The initial string is : "<<str<<endl;
	
	//capacity function
	cout<<"The capacity of the string is : "<<str.capacity()<<endl;
	
	//length function
	cout<<"The length of the string is : "<<str.length()<<endl;
	
	//resize function
	str.resize(15);
	cout<<"The size of the string after resize operation is : "<<str<<endl;
	
	return 0;
}

/*
Input string : Geeksforgeeks is for geeks
The initial string is : Geeksforgeeks is for geeks
The capacity of the string is : 30
The length of the string is : 26
The size of the string after resize operation is : Geeksforgeeks i
*?