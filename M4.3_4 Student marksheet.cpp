//4. Write a C++ Program display Student Mark sheet using Multiple inheritance

#include<iostream>
using namespace std;

class student
{
	string name;
	int rollno;
	public:
		void print_info()
		{
			cout<<"\n\n\t Enter student name :";
			cin>>name;
			cout<<"\n\n\t Enter Roll number :";
			cin>>rollno;
		}
		void put_info()
		{
			cout<<"\n\n\t Name :"<<name;
			cout<<"\n\n\t Roll number :"<<rollno;
		}
};
class subject : public student
{
	int m,s,e,h;
	public:
		void print_marks()
		{
			cout<<"\n\n\t Enter marks of Mathematics :";
			cin>>m;
			cout<<"\n\n\t Enter marks of Science :";
			cin>>s;
			cout<<"\n\n\t Enter marks of English :";
			cin>>e;
			cout<<"\n\n\t Enter marks of Hindi :";
			cin>>h;
		}
		void put_marks()
		{
			int total;
			cout<<"\n\n\t Mathematics ="<<m;
			cout<<"\n\n\t Science ="<<s;
			cout<<"\n\n\t English ="<<e;
			cout<<"\n\n\t Hindi ="<<h;
			cout<<"\n\n\t Total of all subjects :"<<m+s+e+h;
		}
};


main()
{
	subject s;
	s.print_info();
	s.print_marks();
	s.put_info();
	s.put_marks();
}