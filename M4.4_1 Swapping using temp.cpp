//1. Write a program of to swap the two values using template

#include<iostream>
using namespace std;

template <class x>
void swapping(x a,x b)
{
	x c;
	c=a;
	a=b;
	b=c;
	cout<<"\n\n\t After Swapping........";
	cout<<"\n\n\t x ="<<a;
	cout<<"\n\n\t y ="<<b;
}
main()
{
	float x,y;
	cout<<"\n\n\t Input x :";
	cin>>x;
	cout<<"\n\n\t Input y :";
	cin>>y;
	swapping(x,y);
}