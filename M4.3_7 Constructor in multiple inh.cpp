/*
7. Write a C++ Program to illustrates the use of Constructors in multilevel
inheritance
*/
#include<iostream>
using namespace std;

class c1
{
	public:
		c1()
		{
			cout<<"\n\n\t Class c1 is called.";
		}
};
class c2
{
	public:
		c2()
		{
			cout<<"\n\n\t Class c2 is called.";
		}
};
class derived : public c1,public c2
{
	public:
		derived()
		{
			cout<<"\n\n\t Derived class is called.";
		}
};
main()
{
	derived d;
}
