/*
  Binoy Das Gupta
  C++ program to convert uppercase to lowercase and lowercase to uppercase without string class
  02-05-2022
*/

#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
	char str1[100], str2[100];
	
	//uppercase to lowercase
	cout<<"Uppercase string is : ";
	cin.getline(str1,100);
	int i;
	for(i=0; str1[i]!='\0'; i++)
	{
		str1[i] = str1[i] + 32;
	}
	cout<<"Uppercase to lowercase string is : "<<str1<<endl;

	//lowercase to uppercase
	cout<<"lowercase string is : ";
	cin.getline(str2,100);
	for(i=0; str2[i]!='\0'; i++)
	{
		str2[i] = str2[i] - 32;
	}
	cout<<"Uppercase to lowercase string is : "<<str2<<endl;
	
	return 0;
}

/*
Uppercase string is : BINOY
Uppercase to lowercase string is : binoy
lowercase string is : binoy
Uppercase to lowercase string is : BINOY
*/
