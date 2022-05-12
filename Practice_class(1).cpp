/*
  Binoy Das Gupta
  Exercise : Write a class for Student with Roll, Name, Marks in 3 subjects and 
  functions for total marks, grade and required methods.
  11-05-2022
*/

#include<bits/stdc++.h>
using namespace std;

class Student{
	private :
		int Roll, Marks1, Marks2, Marks3;
		char Name;
	public :
        Student(int R, int M1, int M2, int M3)
		{
		setRoll(R);
		setMarks1(M1);
		setMarks2(M2);
		setMarks3(M3);
		}
        void setRoll(int R);
        void setMarks1(int M1);
        void setMarks2(int M2);
        void setMarks3(int M3);
    	int totalMarks();    
        char grade();
};
		void Student::setRoll(int R)
		{
			Roll = R;
			cout<<"Enter roll number = ";
			cin>>Roll;
		}
		void Student::setMarks1(int M1)
		{
			Marks1 = M1;
			cout<<"Enter Marks of first subject = ";
			cin>>Marks1;
		}
		void Student::setMarks2(int M2)
		{
			Marks2 = M2;
			cout<<"Enter Marks of second subject = ";
			cin>>Marks2;
		}
		void Student::setMarks3(int M3)
		{
			Marks3 = M3;
			cout<<"Enter Marks of third subject = ";
			cin>>Marks3;
		}
		int Student::totalMarks()
		{
			int t;
			t = (Marks1+Marks2+Marks3);
			return t;
		}
		char Student::grade()
		{
			float grade = totalMarks()/3;

			if(grade>=100 && grade<70)
				return 'A';
			else if(grade>=50 && grade<70)
				return 'B';
			else
				return 'F';
		}
int main()
{
	int R,M1,M2,M3;
	Student s(R,M1,M2,M3); //object creation
	cout<<"Total marks is = "<<s.totalMarks()<<endl;
	cout<<"Grade is = "<<s.grade()<<endl;
	return 0;
}