/*
  Binoy Das Gupta
  C++ program to demonstrate the working of constructor for Rectangle class.
  09-05-2022
*/

#include<bits/stdc++.h>
using namespace std;

class Rectangle{
	private :
		int length, breadth;
	public :
		Rectangle() //default or, non-parameterized constructor
		{
			length=1;
			breadth=1;
		}
		Rectangle(int l, int b) //parameterized constructor
		{
			setLength(l);
			setBreadth(b);
		}
		Rectangle(Rectangle &r) //copy constructor
		{
			length = r.length;
			breadth = r.breadth;
		}
		void setLength(int l) //mutator
		{ 
			length = l;
			cin>>length;
			if(length<=0)
			{
				length = 1;
			}
			else
			{
				cout<<"Enter length of rectangle = "<<getLength()<<endl;
			}
		}
		void setBreadth(int b) //mutator
		{
			breadth = b;
			cin>>breadth;
			if(breadth<=0)
			{
				breadth = 1;
			}
			else
			{
				cout<<"Enter breadth of rectangle = "<<getBreadth()<<endl;
			}
		}
		int getLength()
		{
			return length;
		}
		int getBreadth()
		{
			return breadth;
		}
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
	Rectangle r1;
	cout<<"The area of first rectangle is = "<<r1.area()<<endl;
	cout<<"The perimeter of first rectangle is = "<<r1.perimeter()<<endl<<endl;
	
	int l,b;
	Rectangle r2(l,b);
	cout<<"\nThe area of second rectangle is = "<<r2.area()<<endl;
	cout<<"The perimeter of second rectangle is = "<<r2.perimeter()<<endl<<endl;
	
	Rectangle r3(r2);
	cout<<"\nThe area of third rectangle is = "<<r3.area()<<endl;
	cout<<"The perimeter of third rectangle is = "<<r3.perimeter()<<endl<<endl;	
	
	return 0;
}

/*
The area of first rectangle is = 1
The perimeter of first rectangle is = 4

10
Enter length of rectangle = 10
5
Enter breadth of rectangle = 5

The area of second rectangle is = 50
The perimeter of second rectangle is = 30


The area of third rectangle is = 50
The perimeter of third rectangle is = 30
*/
