 /* Write a C++ program to implement a class called Student that has private
member variables for name, class, roll number, and marks. Include
member functions to calculate the grade based on the marks and display
the student's information. Accept address from each student implement
using of aggregation
*/
#include<iostream>
using namespace std;

class student 
{
	public:
		string stud_name;
		int stud_clas;
		int stud_rollno;
		student(string stud_name,int stud_clas,int stud_rollno)
		{
			this->stud_name=stud_name;
			this->stud_clas=stud_clas;
			this->stud_rollno=stud_rollno;
		}
};
class grade
{
	private:student *stud;
	public :
		
		int grd_n1;
		
	grade(int grd_n,student *stud)
	{
		
		this->grd_n=grd_n;
		this->stud=stud;
		
		if(grd_n>=95)
	{
		cout<<"\n\n\t Grade : A+";
	}
	else if(grd_n>=85)
	{
		cout<<"\n\n\t Grade : A";
	}
	else if(grd_n>=75)
	{
		cout<<"\n\n\t Grade : B";
	}
	else if(grd_n>=60)
	{
		cout<<"\n\n\t Grade : C";
	}
	else if(grd_n>=40)
	{
		cout<<"\n\n\t Grade : D";
	}
	else
	{
		cout<<"\n\n\t Fail....";
	}
		
	void printdata()
	{
		cout<<"\n\n\t stud_name : "<<stud_name;
		cout<<"\n\n\t stud_clas :"<<stud_clas;
		cout<<"\n\n\t stud_rollno :"<<stud_rollno;
		cout<<"\n\n\t grd_n1 :"<<stud->grd_n;
	}

		
};
main()
{
	student S("vishwa",1,12);
	grade G(56,&S);
	S.printdata();
}
