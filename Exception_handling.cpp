/*
  Binoy Das Gupta
  C++ program for exception handling mechanism.
  16-05-2022
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int numerator, denominator, result;
	cout<<"Enter numerator and denominator = ";
	cin>>numerator>>denominator;
	try
	{
		if(denominator==0)
		{
			throw denominator;
		}
		result = numerator/denominator;
	}
	catch(int ex)
	{
		cout<<"Exeption! Division by zero is not allowed - "<<ex<<endl;
	}
	cout<<"Division is = "<<result<<endl;
	return 0;
}

/*
Enter numerator and denominator = 5 0
Exeption! Division by zero is not allowed - 0
Division is = 0

Enter numerator and denominator = 6 3
Division is = 2
*/

