/*
13.Write a program to find the max number from given two numbers
using friend function
*/

#include<iostream>
using namespace std;

class max_num
{
	int a,b;
	
	friend void findmax(max_num x)
	{
		if(x.a>x.b)
		cout<<"\n\n\t"<<x.a<<" is maximum....";
		else
		cout<<"\n\n\t"<<x.b<<" is maximum....";
	}
	public:
		void getdata(int s,int t)
		{
			a=s;
			b=t;
		}
};
main()
{
	int g,h;
	cout<<"\n\n\t Input number 1 :";
	cin>>g;
	cout<<"\n\n\t Input number 2 :";
	cin>>h;
	max_num o;
	o.getdata(g,h);
	findmax(o);
}