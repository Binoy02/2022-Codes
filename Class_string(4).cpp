/*
  Binoy Das Gupta
  Write a C++ program to demonstrate the working of swap(), replace(), erase(). 
  //Class string is a class which creates string as object and it uses "string" keyword to 
  create that object and no other data type is needed when user uses string class.//
  30-04-2022
*/

#include<bits/stdc++.h>
#include<string> 
using namespace std;

int main()
{
	string str1,str2; //for string class
	cout<<"Input strings : ";
	getline(cin,str1); //taking input for string class
	getline(cin,str2);
	cout<<"The first string is : "<<str1<<endl;
	cout<<"The second string is : "<<str2<<endl;
	
	//swap function
	str1.swap(str2);
	cout<<"\nAfter swapping : "<<endl;
	cout<<"The first string is : "<<str1<<endl;
	cout<<"The second string is : "<<str2<<endl;
	
	//replace(index, space, string) : index indicates at which index you want to replace another string
	//space indicates from the index to how much indexes you want to perform the operation
	//string indicates with which string you want to replace the given string
	str1.replace(5,6,str2);
	cout<<"\nThe string after replace operation is : "<<str1<<endl;
	
	cout<<"\nAfter erasing : "<<endl;
	str1.erase();
	cout<<"The first string is : "<<str1<<endl;
	cout<<"The second string is : "<<str2<<endl;
	
	return 0;
}

/*
Input strings : I am Binoy Das Gupta.
I wish to become a doctorate.
The first string is : I am Binoy Das Gupta.
The second string is : I wish to become a doctorate.

After swapping :
The first string is : I wish to become a doctorate.
The second string is : I am Binoy Das Gupta.

The string after replace operation is : I wisI am Binoy Das Gupta. ecome a doctorate.

After erasing :
The first string is :
The second string is : I am Binoy Das Gupta.
*/
