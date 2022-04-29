/*
  Binoy Das Gupta
  Write a C++ program to demonstrate the working of append(), insert(). 
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
	
	//append function 
	string str1;
	cout<<"\nInput string for append operation : ";
	getline(cin,str1);
	str.append(str1);
	cout<<"The string after append operation is : "<<str<<endl;
	
	//insert function
	string str2;
	cout<<"\nInput string for insert operation : ";
	getline(cin,str2);
	str.insert(str.length(),str2);
	cout<<"The string after insert operation is : "<<str<<endl;
	
	return 0;
}

/*
Input string : I am Binoy
The initial string is : I am Binoy

Input string for append operation :  Das Gupta.
The string after append operation is : I am Binoy Das Gupta.

Input string for insert operation :  I am a student of Computer Science and Engineering at CUET.
The string after insert operation is : I am Binoy Das Gupta. I am a student of Computer Science and Engineering at CUET.
*/