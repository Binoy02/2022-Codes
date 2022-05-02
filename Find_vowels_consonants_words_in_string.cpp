/*
  Binoy Das Gupta
  C++ program to count vowels,consonants and words in a string.
  02-05-2022
*/

#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
	char str[100];
	cout<<"Input string : ";
	cin.getline(str,100);
	
	int i,vowel=0,consonant=0,word=0;
	for(i=0; str[i]!='\0'; i++)
	{
		if(str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
		{
			vowel++;
		}
		else if(str[i] == ' ')
		{
			word++;
		}
		else 
		{
			consonant++;
		}
	}
	cout<<"Vowels in the string are = "<<vowel<<endl;
	cout<<"Cononants in the string are = "<<consonant<<endl;
	cout<<"Words in the string are = "<<word+1<<endl;
	
	return 0;	
}

/*
Input string : I am Binoy Das Gupta
Vowels in the string are = 7
Cononants in the string are = 9
Words in the string are = 5
*/