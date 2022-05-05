/*
  Binoy Das Gupta
  C++ program to demonstrate the basic working of class and object (accessing members of the user defined class from main)
  (i) Using dot operator on object.
  (ii) Using pointer to object.
  05-05-2022
*/

#include<bits/stdc++.h>
using namespace std;

class Rectangle{
	public :
		int length, breadth;
		int area()
		{
			return (length*breadth);
		}
		int perimeter()
		{
			return 2*(length+breadth);
		}
};

int main()
{
	Rectangle r1, r2; //object creation
	Rectangle *ptr; 
	
	//dot operator on object
	cout<<"Input the length of the first rectangle is = ";
	cin>>r1.length;
	cout<<"Input the breadth of the first rectangle is = ";
	cin>>r1.breadth;
	
	cout<<"\nThe area of the first rectangle is = "<<r1.area()<<endl;
	cout<<"The perimeter of the first rectangle is = "<<r1.perimeter()<<endl<<endl;
	
	//pointer to object
	ptr = &r2;
	cout<<"Input the length of the second rectangle is = ";
	cin>>ptr->length;
	cout<<"Input the breadth of the second rectangle is = ";
	cin>>ptr->breadth;
	
	cout<<"\nThe area of the second rectangle is = "<<ptr->area()<<endl;
	cout<<"The perimeter of the second rectangle is = "<<ptr->perimeter()<<endl;
	
	return 0;
}
 
  
/*
Input the length of the first rectangle is = 10
Input the breadth of the first rectangle is = 5

The area of the first rectangle is = 50
The perimeter of the first rectangle is = 30

Input the length of the second rectangle is = 500
Input the breadth of the second rectangle is = 100

The area of the second rectangle is = 50000
The perimeter of the second rectangle is = 1200
*/