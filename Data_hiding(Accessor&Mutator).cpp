/*
  Binoy Das Gupta
  C++ program to demonstrate the working of accessor and mutator.[Data hiding]
  05-05-2022
*/

#include<bits/stdc++.h>
using namespace std;

class Rectangle{
	int length, breadth;
	public :
		void setLength(int l) //mutator 
		{
			if(l<0)
			{
				l = 1;
			}
			else
			{
				length = l;
				cout<<"Enter length of rectangle = ";
				cin>>length;
			}
		}
		void setBreadth(int b) //mutator 
		{
			if(b<0)
			{
				b = 1;
			}
			else 
			{
				breadth = b;
				cout<<"Enter breadth of rectangle = ";
				cin>>breadth;
			}
		}
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
	Rectangle *ptr = new Rectangle;
	int l,b;
	
	ptr->setLength(l);

	ptr->setBreadth(b);
	
	cout<<"The area of the rectangle is = "<<ptr->area()<<endl;
	cout<<"The perimeter of the rectangle is = "<<ptr->perimeter()<<endl;
	
	return 0;
}

/*
Enter length of rectangle = 10
Enter breadth of rectangle = 5
The area of the rectangle is = 50
The perimeter of the rectangle is = 30
*/