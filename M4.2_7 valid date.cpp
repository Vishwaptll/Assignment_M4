/*
7. Write a C++ program to implement a class called Date that has private
member variables for day, month, and year. Include member functions to
set and get these variables, as well as to validate if the date is valid.
*/
#include<iostream>
using namespace std;
 class date
 {
 	int day;
 	int month;
 	int year;
 	public:
 		void setdata();
 		void getdata();
 };
 void date :: setdata()
 {
 	int i=0,j=0;
 	cout<<"\n\n\t Enter day :"<<i;
 	cin>>i;
 	cout<<"\n\n\t Enter month :"<<j;
 	cin>>j;
 	int y;
 	cout<<"\n\n\t Enter year :"<<y;
 	cin>>y;
 	cout<<"\n\n\t Valid year";
 	if( i<=31)
 	{
 		if( j<=12)
 		{
 			cout<<"\n\n\t Valid month";
 			
		 }
		 else
		 {
		 	cout<<"\n\n\y Unvalid month..........";
		 }
		 
 		cout<<"\n\n\t Valid day";
 		
	 }
	 else
	 {
	 	cout<<"\n\n\t Unvalid day.......";
	 }
	
 }
void date :: getdata()
{
	int i,j,y;
	cout<<"\n\n\t"<<"\tDate"<<i<<"\tMonth"<<j<<"\tYear"<<y;
	
}
main()
{
	date d;
	d.setdata();
	d.getdata();
}