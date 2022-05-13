/*
  Binoy Das Gupta
  C++ program to add two complex numbers using operator overloading with friend function.
  13-05-2022
*/

#include<bits/stdc++.h>
using namespace std;

class Complex{
	private :
		int real, img;
	public :
		Complex(int r=0, int i=0)
		{
			real = r;
			img = i;
		}
		void display()
		{
			cout<<real<<"+"<<img<<"i"<<endl;
		}
		friend Complex operator+(Complex c1, Complex c2);
};

Complex operator+(Complex c1, Complex c2)
{
	Complex temp;
	temp.real = c1.real + c2.real;
	temp.img = c1.real + c2.img;
	return temp;
}

int main()
{
	Complex c1(3,3),c2(5,7),c3;
	c3 = c1+c2;
	c3.display();
	return 0;
}

/*
8+10i
*/