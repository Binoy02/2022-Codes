/*
  Binoy Das Gupta
  C++ program to implement the concept of inheritance.
  18-05-2022
*/

#include<bits/stdc++.h>
using namespace std;

class Shape{
	protected :
		int height, width;
	public :
		void setHeight(int h)
		{
			height = h;
			cout<<"Height is = ";
			cin>>height;
		}
		void setWidth(int w)
		{
			width = w;
			cout<<"Width is = ";
			cin>>width;
		}
};

class Rectangle : public Shape{
	public :
		Rectangle()
		{
			height = 1;
			width = 1;
		}
		Rectangle(int h, int w)
		{
			setHeight(h);
			setWidth(w);
		}
		int getArea()
		{
			return (height*width);
		}
};
int main()
{
    int h,w;
	Rectangle R1;
	Rectangle R2(h,w);
	cout<<"Area of first rectangle is = "<<R1.getArea()<<endl;
	cout<<"Area of second rectangle is = "<<R2.getArea()<<endl;
	return 0;
}

/*
Height is = 25
Width is = 10
Area of first rectangle is = 1
Area of second rectangle is = 250
*/