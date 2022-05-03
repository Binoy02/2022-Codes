/*
  Binoy Das Gupta
  C++ program to find username from email address
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
	cout<<"Email-address : "<<str1<<endl;
	
	int i,j,length=0;
	for(i=0; str1[i]!='@'; i++)
	{
		length++;
	}
	
	for(j=0, i=0; str2[j]!='\0', i<length; i++,j++)
	{
		str2[j] = str1[i];
	}
	
	
	cout<<"Username is : "<<str2<<endl;
	
	return 0;
}

/*
Input string : binoy4446@gmail.com
Email-address : binoy4446@gmail.com
Username is : binoy4446
*/