/*
  Binoy Das Gupta
  C++ program to demnonstrate the working of constructor and destructor.
  17-05-2022
*/

#include<bits/stdc++.h>
using namespace std;

class Cars{
	//data members
	string company_name;
	string model_name;
	string fuel_type;
	float milege;
	double price;
	
	public :
	//default constructor
	Cars()
	{
		
	}
	
	//parameterized constructor
	Cars(string cname, string mname, string ftype, float mil, double pr)
	{
		setData(cname,mname,ftype,mil,pr);
	}
	
	//copy constructor
	Cars(Cars &obj)
	{
		company_name = obj.company_name;
		model_name = obj.model_name;
		fuel_type = obj.fuel_type;
		milege = obj.milege;
		price = obj.price;	
	}
	
	//member function
	void setData(string cname, string mname, string ftype, float mil, double pr)
	{
		company_name = cname;
		model_name = mname;
		fuel_type = ftype;
		milege = mil;
		price = pr;
	}
	
	void display()
	{
		cout<<"Car attributes : "<<endl;
		cout<<"Company Name : "<<company_name<<endl;
		cout<<"Model Name : "<<model_name<<endl;
		cout<<"Fuel type : "<<fuel_type<<endl;
		cout<<"Milege : "<<milege<<endl;
		cout<<"Price : "<<price<<endl<<endl;
	}
};

int main()
{
	Cars c1; //object created for default constructor
	Cars c2("Toyota","Fortuner","Diesel",150.25,580000.00); //object creation and parameterized constructor call
	c1.setData("Maruti Suzuki","Z","Diesel",100.25,350000.98);
	c1.display();
	c2.display();
	Cars c3 = c2; //object creation and copy constructor call
	c3.display();
	
	return 0;
}

/*
Car attributes :
Company Name : Maruti Suzuki
Model Name : Z
Fuel type : Diesel
Milege : 100.25
Price : 350001

Car attributes :
Company Name : Toyota
Model Name : Fortuner
Fuel type : Diesel
Milege : 150.25
Price : 580000

Car attributes :
Company Name : Toyota
Model Name : Fortuner
Fuel type : Diesel
Milege : 150.25
Price : 580000
*/