/*
  Binoy Das Gupta
  C++ program to add two complex numbers using operator overloading.
  13-05-2022
*/

#include<bits/stdc++.h>
using namespace std;

class Complex{
	private :
		int real;
		int img;
	public :
		Complex(int r=0,int i=0)
		{
			real = r;
			img = i;
		}
		void display()
		{
			cout<<real<<"+i"<<img<<endl;
		}
        Complex operator+(Complex c)
        {
            Complex temp;
            temp.real=real+c.real;
            temp.img=img+c.img;
            return temp;
        }
};

int main()
{
	Complex c1(4,5),c2(6,12),c3; //c1,c2,c3 are small alphabets 
	c3 = c1 + c2;
	c3.display();
	return 0;
}

/*
10+i17
*/