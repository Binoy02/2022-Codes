/*
  Binoy Das Gupta
  C++ program to demonstrate the working of multiple catch statement.
  17-05-2022
*/
 
#include<bits/stdc++.h>
using namespace std;

int main()
{
    try
    {
        throw 5.2;
    }
    catch(int ex)
    {
        cout<<"Integer exception : "<<ex<<endl;
    }
    catch(double ex)
    {
        cout<<"Double exception : "<<ex<<endl;
    }
    return 0;
}

/*
Double exception : 5.2
*/