/*
  Binoy Das Gupta
  Write a C++ program for class string : Input and display,push_back and pop_back operation. 
  //Class string is a class which creates string as object and it uses "string" keyword to 
  create that object and no other data type is needed when user uses string class.//
  29-04-2022
*/

#include<bits/stdc++.h>
#include<string> // for string class
using namespace std;

int main()
{
	string str; //str is an object
	//Taking inputs for operations 
	cout<<"Input : ";
	getline(cin,str);
	char ch;
	cout<<"Input a character : ";
	cin>>ch;
	//displaying string
	cout<<"The initial string is : "<<str <<endl;
	//Inserting a character
	str.push_back(ch);
	cout<<"The string after push_back operation is : "<<str<<endl;
	//Deleting a character
	str.pop_back();
	cout<<"The string after pop_back operation is : "<<str<<endl;
	return 0;
}

/*
Input : geeksforgeek
Input a character : s
The initial string is : geeksforgeek
The string after push_back operation is : geeksforgeeks
The string after pop_back operation is : geeksforgeek
*/
   
                                       