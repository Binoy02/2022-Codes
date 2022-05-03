/*
  Binoy Das Gupta
  C++ program to check if a string is palindrome
  03-05-2022
*/

#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
	char str1[100], str2[100]; 
	cout<<"Input string : ";
	cin.getline(str1,100);
	
	int length=0;
	int i,j;
	for(i=0; str1[i]!='\0'; i++)
	{
	    length++;
	}
	for(j=0, i=length-1; str2[j]!='\0', i>=0; i--,j++)
	{
		str2[j] = str1[i];
	}
	cout<<"Reverse string is : "<<str2<<endl;
	int count = 0;
	for(i=0; str1[i]!='\0'; i++)
	{
		if(str1[i] == str2[i])
			count++;
	}
	if(count==length)
		cout<<str1<<" is palindrome."<<endl;
	else
		cout<<str1<<" is not palindrome."<<endl;
		
	return 0;
}

/*
Input string : madam
Reverse string is : madam
madam is palindrome.

Input string : binoy
Reverse string is : yonib
binoy is not palindrome.
*/
