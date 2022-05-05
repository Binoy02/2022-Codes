/*
  Binoy Das Gupta
  C++ program to demonstrate the working of object created in heap.
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
	Rectangle *ptr = new Rectangle; //object creation in heap [new keyword is used]
	
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