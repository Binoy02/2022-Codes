/*
  Binoy Das Gupta
  C++ program to convert uppercase to lowercase and lowercase to uppercase using string iterator;
  02-05-2022
*/

#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
	string str1, str2; //for string class
	
	//uppercase to lowercase
	cout<<"Uppercase string is : ";
	getline(cin,str1);
	
	string::iterator it1;
	for(it1 = str1.begin(); it1!= str1.end(); it1++)
	{
		*it1 = *it1 + 32;
	}
	
	cout<<"Uppercase to lowercase string is : "<<str1<<endl;
	
	//lowercase to uppercase
	cout<<"Lowercase string is : ";
	getline(cin,str2);
	
	string::iterator it2;
	for(it2 = str2.begin(); it2!= str2.end(); it2++)
	{
		*it2 = *it2 - 32;
	}
	
	cout<<"Lowercase to uppercase string is : "<<str2<<endl;
	
	return 0;
}

/*
Uppercase string is : BINOY
Uppercase to lowercase string is : binoy
Lowercase string is : binoy
Lowercase to uppercase string is : BINOY
*/
