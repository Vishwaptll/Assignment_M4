//9. Write a Program of Two 1D Matrix Addition using Operator Overloading

#include<iostream>
using namespace std;

class math

{
	int x,y,z;
	public:
		int sum(int a,int b)
		{
			x=a;
			y=b;
			return x+y;
		}
		int sum(int a,int b,int c)
		{
			x=a;
			y=b;
			z=c;
			return (x+y+z);
		}
};
main()
{
	math m;
	cout<<"\n\n\t Addition for 2 numbers :"<<m.sum(10,20);
		cout<<"\n\n\t Addition for 3 numbers :"<<m.sum(10,20,30);
	
}