/*
6. Write a C++ Program to show access to Private Public and Protected using
Inheritance
*/
#include<iostream>
using namespace std;

class one
{
	private:
		int a;
	protected :
		int b;
	public:
		int c;
		int get_a()
		{
			a=100;
			return a;
			
		}
};
class two : public one
{
	public :
		int get_b()
		{
			b=200;
			return b;
			cout<<"\n\n\t Private member a ="<<get_a();
			
			
		}
		int get_c()
		{
			c=300;
			return c;
		}
};
main()
{
	two t;
	cout<<"\n\n\t Proctected member b = "<<t.get_b();
	cout<<"\n\n\t Public member c = "<<t.get_c();
	t.c=400;
	cout<<"\n\n\t Public member c = "<<t.c;
}