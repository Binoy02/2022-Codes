/*
  Binoy Das Gupta
  C++ program to demonstrate the working of pointer to object.
  05-05-2022
*/

#include<bits/stdc++.h>
using namespace std;

class Rectangle{
	public :
		int length, breadth;
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
	Rectangle r; //object creation
	Rectangle *ptr; //pointer declaration through class
	ptr = &r;
	//pointer to object[ here ptr denotes r and through ptr, members of the class can be
	//accessed without dot operator
	ptr->length = 10;
	ptr->breadth = 5;
	cout<<"The area of the rectangle is = "<<ptr->area()<<endl;
	cout<<"The perimeter of the rectangle is = "<<ptr->perimeter()<<endl;
	return 0;
}

/*
The area of the rectangle is = 50
The perimeter of the rectangle is = 30
*/
