/*
  Binoy Das Gupta
  C++ program to write a class
  04-05-2022
*/

#include<bits/stdc++.h>
using namespace std;

class Rectangle 
{
	public :  //by default, class is private and so the members. to access them, public is used.
	int length;
	int breadth;
	
	int area()
	{
		return length*breadth;
	}
	int perimeter()
	{
		return 2*(length+breadth);
	}
};

int main()
{
	Rectangle r1, r2; // r1 and r2 are objects. creation of object is done like this.
	
	//members of class are accessed by dot operators.
	r1.length = 10;
	r1.breadth = 5;
	
	cout<<"The area of first rectangle is = "<<r1.area()<<endl;
	cout<<"The perimeter of first rectangle is = "<<r1.perimeter()<<endl;
	
	r2.length = 15;
	r2.breadth = 10;
	
	cout<<"The area of second rectangle is = "<<r2.area()<<endl;
	cout<<"The perimeter of second rectangle is = "<<r2.perimeter()<<endl;
	
	return 0;
}