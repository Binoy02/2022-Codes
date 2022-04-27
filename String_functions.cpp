/*
  Binoy Das Gupta
  Write a C++ program to work on functions of string.
  27-04-2022
*/

#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
	char s1[100], s2[100];
	cout<<"Input first string : ";
	cin.getline(s1,100);
	cout<<"Input second string : ";
	cin.getline(s2,100);
	char ch;
	cout<<"Enter a character : ";
	cin>>ch;
		
	cout<<strstr(s1,s2)<<endl;
	cout<<strchr(s1,ch)<<endl;
	cout<<strrchr(s1,ch)<<endl;
	
	return 0;
}