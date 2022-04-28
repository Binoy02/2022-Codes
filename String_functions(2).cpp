/*
  Binoy Das Gupta
  Write a C++ program to work on functions of string such as strcmp(), strchr(), strrchr(). 
  28-04-2022
*/

#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
	char s1[100];
	char s2[100];
	
	cout<<"Input first string : ";
	cin.getline(s1,100);
	cout<<"Input second string : ";
	cin.getline(s2,100);
	cout<<"S1 = "<<s1<<endl;
	cout<<"S2 = "<<s2<<endl;
		
	cout<<strcmp(s1,s2)<<endl;
	
	return 0;
}

/*
Output(1) : 
Input first string : minot
Input second string : elder
S1 = minor
S2 = elder
It returns 8

Output(2) :
Input first string : Hello
Input second string : Hello
S1 = Hello
S2 = Hello
It returns 0

Output(3) :
Input first string : Hello
Input second string : hello
S1 = Hello
S2 = hello
It returns -32

Input first string : hello
Input second string : Hello
S1 = hello
S2 = Hello
It returns 32

Input first string : HellO
Input second string : Hello
S1 = HellO
S2 = Hello
It returns -32

*/


