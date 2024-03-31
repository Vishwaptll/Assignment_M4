/*
3. Write a C++ program to create a class called Car that has private
member variables for company, model, and year. Implement member
functions to get and set these variables.
*/
#include<iostream>
using namespace std;

class car
{
	private :
		string company,model;
		int year;
	public:
		void getdata();
		void putdata();
};
void car :: getdata()
{
	cout<<"\n\n\t Enter company name :";
	cin>>company;
	cout<<"\n\n\t Enter model of car :";
	cin>>model;
	cout<<"\n\n\t Enter year :";
	cin>>year;
}
void car :: putdata()
{
	cout<<"\n\n\t Company :"<<company;
	cout<<"\n\n\t Model of car :"<<model;
	cout<<"\n\n\t Year :"<<year;
}
main()
{
	car cr;
	cr.getdata();
	cr.putdata();
}