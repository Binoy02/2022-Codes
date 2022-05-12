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
		void setRoll(int R)
		{
			Roll = R;
			cout<<"Enter roll number = ";
			cin>>Roll;
		}
		void setMarks1(int M1)
		{
			Marks1 = M1;
			cout<<"Enter Marks of first subject = ";
			cin>>Marks1;
		}
		void setMarks2(int M2)
		{
			Marks2 = M2;
			cout<<"Enter Marks of second subject = ";
			cin>>Marks2;
		}
		void setMarks3(int M3)
		{
			Marks3 = M3;
			cout<<"Enter Marks of third subject = ";
			cin>>Marks3;
		}
		int totalMarks()
		{
			int t;
			t = (Marks1+Marks2+Marks3);
			return t;
		}
		char grade()
		{
			float grade = totalMarks()/3;

			if(grade>=100 && grade<70)
				return 'A';
			else if(grade>=50 && grade<60)
				return 'B';
			else
				return 'F';
		}
};

int main()
{
	int R,M1,M2,M3;
	Student s(R,M1,M2,M3); //object creation
	cout<<"Total marks is = "<<s.totalMarks()<<endl;
	cout<<"Grade is = "<<s.grade()<<endl;
	return 0;
}

/*
Enter roll number = 02
Enter Marks of first subject = 70
Enter Marks of second subject = 50
Enter Marks of third subject = 80
Total marks is = 200
Grade is = B
*/
