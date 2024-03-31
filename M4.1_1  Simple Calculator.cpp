//1. WAP to create simple calculator using class

#include<iostream>
using namespace std;
	class calc
{
			int a,b;
			
		public :
			void getdata();
	     	void arthematic();
};
	void calc ::getdata()
		{
	cout<<"\n\n\t Enter Number 1 :";
	cin>>a;
	cout<<"\n\n\t Enter Number 2 :";
	cin>>b;	
		}
	void calc :: arthematic()
		{
	cout<<"\n\n\t Addition : "<<a+b;
	cout<<"\n\n\t Subtraction : "<<a-b;
	cout<<"\n\n\t Multiplication : "<<a*b;
	cout<<"\n\n\t Division : "<<a/b;
		}
main()
{
	calc obj;
	obj.getdata();
	obj.arthematic();
	
	
}