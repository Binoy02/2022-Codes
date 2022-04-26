/*
  Binoy Das Gupta
  Write a C++ program to read and print string.(3)
  26-04-2022
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	//Input more than one string and print it and then input another string and print it.
	//Simply if user wants to read and print multiple strings one after another, this is the program.
	char s1[100];
	cout<<"Enter string : ";
	cin.getline(s1,100);
	cout<<"Welcome "<<s1<<endl;
	
	char s2[100];
	cout<<"Enter string : ";
	cin.getline(s2,100);
	cout<<"Welcome "<<s2<<endl;	
	
	return 0;
}